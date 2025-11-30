#include "model.h" // Panggil otak AI yang sudah kamu buat

// Inisialisasi Objek Klasifikasi
Eloquent::ML::Port::SVM classifier;

void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("Sistem IoT AI Kesehatan Siap!");
  Serial.println("==============================");
}

void loop() {
  // --- 1. SIMULASI DATA SENSOR (Nanti diganti sensor asli) ---
  // Urutan WAJIB SAMA dengan Python: [Room_Temp, Humidity, SpO2, BPM, Body_Temp]
  
  // Kasus A: Contoh Orang Sehat (Good)
  float data_sehat[] = {25.0, 55.0, 98.0, 75.0, 36.5};
  
  // Kasus B: Contoh Orang Sakit/Bahaya (Bad) -> SpO2 rendah, Demam
  float data_sakit[] = {28.0, 60.0, 85.0, 110.0, 39.0};

  // --- 2. PREDIKSI (AI BERPIKIR DI SINI) ---
  
  // Tes Data Sehat
  Serial.print("Cek Data Sehat: ");
  prediksiStatus(data_sehat);
  
  delay(1000);

  // Tes Data Sakit
  Serial.print("Cek Data Sakit: ");
  prediksiStatus(data_sakit);

  Serial.println("------------------------------");
  delay(3000); // Ulangi setiap 3 detik
}

void prediksiStatus(float *input_array) {
  // Fungsi predict akan mengembalikan angka: 0 (Good), 1 (Poor), 2 (Bad)
  int hasil = classifier.predict(input_array);

  Serial.print("Hasil Prediksi: ");
  if (hasil == 0) {
    Serial.println("0 - GOOD (Aman)");
  } else if (hasil == 1) {
    Serial.println("1 - POOR (Kurang Sehat)");
  } else {
    Serial.println("2 - BAD (BAHAYA! PERLU PENANGANAN)");
    // Di sini nanti kamu tambahkan kode nyalakan Buzzer/LED
  }
}