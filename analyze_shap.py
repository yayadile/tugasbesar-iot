import pandas as pd
import numpy as np
import shap
import matplotlib.pyplot as plt
from sklearn.svm import SVC
from sklearn.model_selection import train_test_split

# 1. LOAD DATA
filename = 'final_dataset_ready_for_training.csv'
df = pd.read_csv(filename)

X = df[['room_temp', 'humidity', 'spo2', 'bpm', 'body_temp']]
y = df['label']

# Ambil sampel data (misal 100 data saja) biar proses SHAP cepat
# Kalau laptop kuat, bisa pakai semua data.
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)
X_sample = X_train.sample(100, random_state=42) 

# 2. LATIH MODEL (Sama persis dengan konfigurasi kamu)
print("Sedang melatih model...")
model = SVC(kernel='linear', C=10, probability=True) # probability=True penting buat SHAP
model.fit(X_train, y_train)

# 3. HITUNG SHAP VALUES
print("Sedang menghitung SHAP Values (Mungkin agak lama)...")

# Kita pakai KernelExplainer (Paling umum untuk SVM)
# Fungsi ini akan melihat: "Kalau SpO2 saya tutup, tebakannya berubah gak?"
explainer = shap.KernelExplainer(model.predict, X_sample)
shap_values = explainer.shap_values(X_sample)

# 4. TAMPILKAN GRAFIK (Summary Plot)
print("Menampilkan Grafik...")
plt.figure()
shap.summary_plot(shap_values, X_sample, show=False)
plt.title("Analisa SHAP: Fitur Mana yang Paling Penting?")
plt.tight_layout()
plt.show()

# 5. PENJELASAN TEKS
print("\n=== CARA BACA GRAFIK SHAP UNTUK LAPORAN ===")
print("1. Lihat fitur yang berada paling ATAS di grafik.")
print("   Itu adalah fitur yang paling 'DI DENGAR' oleh AI.")
print("   (Biasanya SpO2 atau BPM ada di paling atas).")
print("\n2. Lihat warnanya (Merah = Nilai Tinggi, Biru = Nilai Rendah).")
print("   Jika titik MERAH ada di sebelah KANAN -> Artinya nilai tinggi bikin AI yakin.")
print("   Jika titik BIRU ada di sebelah KANAN -> Artinya nilai rendah bikin AI yakin.")