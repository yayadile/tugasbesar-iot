# Tugas Besar IoT - Monitoring Kesehatan (tubesiot)

Proyek ini merupakan bagian dari tugas besar IoT yang bertujuan untuk **Monitoring Kesehatan**. Repository ini berisi:

1.  **Aplikasi Mobile Flutter** (`/tubesiot`) untuk visualisasi data real-time, antarmuka pengguna, dan analisis data kesehatan.
2.  **Model Machine Learning** dan kode pemrosesan data (`.py`, `.csv`) untuk training dan implementasi.
3.  **Kode Mikrokontroler** (`tubesiot.ino`) yang terintegrasi dengan perangkat keras IoT.

## 🛠️ Struktur Repository Utama

* **`tubesiot/`**: Folder utama yang berisi kode sumber aplikasi mobile Flutter.
* **`tubesiot.ino`**: Kode Arduino/Mikrokontroler.
* **`model.h`**: File header yang berisi model ML yang telah dikonversi (jika diimplementasikan di perangkat).
* **`training_cv.py`**: Script Python untuk proses training model.

## 🚀 Memulai Proyek Flutter

Untuk menjalankan aplikasi mobile:

1.  Pastikan Anda berada di dalam folder `/tubesiot`.
2.  Dapatkan semua dependensi: `flutter pub get`
3.  Jalankan aplikasi di perangkat atau emulator: `flutter run`

---
*Konten ini menggantikan semua konten Flutter standar Anda dan menyajikan proyek secara profesional.*