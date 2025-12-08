#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

#include "DHT.h"
#include "MAX30105.h"

// =====================
// PIN SETUP
// =====================
#define DHTPIN 5
#define DHTTYPE DHT11
#define LM35_PIN 34

// MAX30102 PINS (Wire1)
#define MAX_SDA 18
#define MAX_SCL 19

// =====================
hd44780_I2Cexp lcd;
DHT dht(DHTPIN, DHTTYPE);
MAX30105 sensor;

// BPM smoothing variables
float bpmAvg = 0;
float bpmSmooth = 0;
float smoothFactor = 0.85;

unsigned long lastBeatTime = 0;

// =====================
// Custom beat detection
// =====================
long lastIRfiltered = 0;

bool detectBeat(long ir) {
  long filtered = (0.9 * lastIRfiltered) + (0.1 * ir);

  bool beat = false;
  if (filtered > lastIRfiltered + 1000) beat = true;

  lastIRfiltered = filtered;
  return beat;
}

// =====================
void setup() {
  Serial.begin(115200);

  // LCD
  Wire.begin(21, 22);
  lcd.begin(16, 2);
  lcd.backlight();

  // DHT
  dht.begin();

  // MAX30102
  Wire1.begin(MAX_SDA, MAX_SCL);
  if (!sensor.begin(Wire1)) {
    Serial.println("MAX30102 NOT FOUND!");
    lcd.print("MAX FAILED!");
    while (1);
  }

  sensor.setup();
  sensor.setPulseAmplitudeRed(0x1F);
  sensor.setPulseAmplitudeIR(0x1F);

  lcd.clear();
  lcd.print("ALL SENSOR READY");
  delay(2000);
  lcd.clear();
}

// =====================
void loop() {

  // -------- DHT --------
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  // -------- LM35 --------
  int raw = analogRead(LM35_PIN);
  float volt = raw * (3.3 / 4095.0);
  float lmTemp = volt * 100;

  // -------- MAX30102 --------
  long irValue = sensor.getIR();
  float rawBPM = 0;

  if (irValue > 50000) {
    if (detectBeat(irValue)) {
      unsigned long now = millis();
      float bpm = 60.0 / ((now - lastBeatTime) / 1000.0);
      lastBeatTime = now;

      rawBPM = bpm;

      // smoothing
      bpmAvg = bpmAvg * 0.8 + bpm * 0.2;
      bpmSmooth = bpmSmooth * smoothFactor + bpmAvg * (1 - smoothFactor);
    }
  }

  // -------- SERIAL --------
  Serial.print("IR: "); Serial.print(irValue);
  Serial.print(" | Raw BPM: "); Serial.print(rawBPM);
  Serial.print(" | Avg BPM: "); Serial.print(bpmAvg);
  Serial.print(" | Smooth BPM: "); Serial.println(bpmSmooth);

  // -------- LCD --------
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(t, 1);
  lcd.print((char)223);
  lcd.print(" LM:");
  lcd.print(lmTemp, 1);

  lcd.setCursor(0, 1);
  lcd.print("H:");
  lcd.print(h, 0);
  lcd.print("% BPM:");
  lcd.print((int)bpmSmooth);
  lcd.print(" ");

  delay(100);
}