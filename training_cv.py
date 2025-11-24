import pandas as pd
import numpy as np
from sklearn.svm import SVC
from sklearn.model_selection import StratifiedKFold, cross_val_score
from micromlgen import port 

# 1. LOAD DATASET
filename = 'final_dataset_ready_for_training.csv'
df = pd.read_csv(filename)

print(f"Menggunakan dataset: {filename}")
print(f"Total Data: {len(df)} baris")

# 2. PERSIAPAN FITUR (X) DAN LABEL (y)
X = df[['room_temp', 'humidity', 'spo2', 'bpm', 'body_temp']]
y = df['label']

# 3. KONFIGURASI MODEL (DIPERBAIKI)
# - kernel='linear': Wajib buat ESP32/ESP8266 biar cepat
# - C=100: Saya naikkan drastis (dari 1.0) supaya model lebih 'pintar' (akurasi naik)
# - gamma=0.001: WAJIB ADA angka ini supaya micromlgen tidak error
model = SVC(kernel='linear', C=10, gamma=0.001)

# 4. SIAPKAN SKENARIO 10-FOLD
kfold = StratifiedKFold(n_splits=10, shuffle=True, random_state=42)

print("\n--- MEMULAI 10-FOLD CROSS VALIDATION ---")
print("Mohon tunggu, proses training sedikit lebih lama karena C=100...")

# 5. JALANKAN VALIDASI
scores = cross_val_score(model, X, y, cv=kfold, scoring='accuracy')

# 6. TAMPILKAN HASIL
for i, score in enumerate(scores):
    print(f"Fold-{i+1}: Akurasi = {score*100:.2f}%")

rata_rata = scores.mean() * 100
standar_deviasi = scores.std() * 100

print(f"\n>>> HASIL AKHIR <<<")
print(f"Rata-rata Akurasi: {rata_rata:.2f}%")
print(f"Stabilitas: +/- {standar_deviasi:.2f}%")

# 7. EXPORT MODEL KE C++ (FIXED)
print("\n--- MENGEKSPOR MODEL KE C++ ---")
model.fit(X, y) # Latih ulang 100% data

# Trik print agar bisa langsung di-copy
# GANTI JADI INI:
print("\nSedang menyimpan file 'model.h'...")
with open('model.h', 'w') as f:
    f.write(port(model))

print("SUKSES! File 'model.h' sudah otomatis dibuat di folder tubesiot.")
print("Silakan buka folder proyekmu dan cari file model.h")