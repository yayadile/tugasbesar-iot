#include <WiFi.h>
#include <Firebase_ESP_Client.h> // Ganti Blynk dengan Firebase
#include <Wire.h>
#include "MAX30100_PulseOximeter.h"
#include "DHT.h"
#include "model.h" // Otak AI SVM

// --- KREDENSIAL WIFI & FIREBASE ---
#define WIFI_SSID "NamaWiFiKamu"
#define WIFI_PASSWORD "PasswordWiFiKamu"
#define API_KEY ""
#define DATABASE_URL "https://iot-health-d3068-default-rtdb.firebaseio.com/"

// --- KONFIGURASI PIN (SESUAI LAPORAN) ---
#define DHTPIN 4
#define DHTTYPE DHT11
#define LM35_PIN 34 // ADC1 (Aman saat WiFi nyala)

// --- OBJEK ---
DHT dht(DHTPIN, DHTTYPE);
PulseOximeter pox;
Eloquent::ML::Port::SVM classifier;
FirebaseData fbdo;
FirebaseAuth auth;
FirebaseConfig config;

// Variabel Global
float room_temp = 0, humidity = 0, spo2 = 0, bpm = 0, body_temp = 0;
bool signupOK = false;
uint32_t tsLastReport = 0;

// --- LOGIKA EDGE-SHAP (SESUAI LAPORAN BAB 5.2) ---
// Copy nilai scaler & weights dari hasil training Python kamu
float MEAN[] = {24.5, 60.0, 96.0, 75.0, 36.5}; 
float SCALE[] = {2.5, 10.0, 2.0, 15.0, 0.8};
float WEIGHTS[] = {0.1, 0.05, -1.5, 0.2, 1.2}; 
String feature_names[] = {"Suhu Ruang", "Kelembapan", "SpO2", "BPM", "Suhu Tubuh"};

// Fungsi callback detak jantung
void onBeatDetected() { Serial.println("♥"); }

void setup() {
  Serial.begin(115200);
  
  // 1. Koneksi WiFi
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print("."); delay(300);
  }
  Serial.println();

  // 2. Koneksi Firebase
  config.api_key = API_KEY;
  config.database_url = DATABASE_URL;
  if (Firebase.signUp(&config, &auth, "", "")) {
    signupOK = true;
  }
  Firebase.begin(&config, &auth);
  Firebase.reconnectWiFi(true);

  // 3. Sensor Init
  dht.begin();
  if (!pox.begin()) { Serial.println("MAX30100 GAGAL"); } 
  else { pox.setOnBeatDetectedCallback(onBeatDetected); }
}

void loop() {
  pox.update(); // Wajib update MAX30100 secepat mungkin

  // Kirim data setiap 2 detik (Firebase jangan terlalu spam)
  if (millis() - tsLastReport > 2000) {
    
    // --- A. BACA SENSOR ---
    float h = dht.readHumidity();
    float t = dht.readTemperature();
    room_temp = isnan(t) ? 25 : t;
    humidity = isnan(h) ? 50 : h;

    float read_bpm = pox.getHeartRate();
    float read_spo2 = pox.getSpO2();
    if (read_bpm > 30) bpm = read_bpm;
    if (read_spo2 > 50) spo2 = read_spo2;

    int adcVal = analogReadMilliVolts(LM35_PIN); // Pakai fungsi kalibrasi ESP32
    body_temp = adcVal / 10.0;

    // --- B. PREDIKSI AI & SHAP ---
    float raw_data[] = {room_temp, humidity, spo2, bpm, body_temp};
    
    // Scaling manual (Sesuai Bab 5.2 Laporan)
    float features[5];
    for(int i=0; i<5; i++) features[i] = (raw_data[i] - MEAN[i]) / SCALE[i];
    
    // Prediksi SVM
    int label = classifier.predict(features);

    // Analisa Penyebab (SHAP Proxy)
    String main_cause = "-";
    if (label == 2) { // Jika status BAD
        float max_impact = 0;
        int idx = -1;
        for(int i=0; i<5; i++) {
            float contribution = abs(WEIGHTS[i] * features[i]);
            if (contribution > max_impact) {
                max_impact = contribution;
                idx = i;
            }
        }
        if (idx != -1) main_cause = feature_names[idx];
    }

    // --- C. KIRIM KE FIREBASE (JSON) ---
    if (Firebase.ready() && signupOK) {
      FirebaseJson json;
      json.set("sensor/room_temp", room_temp);
      json.set("sensor/humidity", humidity);
      json.set("sensor/spo2", spo2);
      json.set("sensor/bpm", bpm);
      json.set("sensor/body_temp", body_temp);
      
      json.set("ai/status_code", label); // 0=Good, 1=Poor, 2=Bad
      json.set("ai/penyebab", main_cause); // Hasil SHAP (misal: "SpO2")
      
      // Kirim ke path '/pasien_01'
      Firebase.RTDB.setJSON(&fbdo, "/pasien_01", &json);
      Serial.println("Data terkirim ke Firebase!");
    }
    tsLastReport = millis();
  }
}