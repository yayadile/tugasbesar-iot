import 'package:flutter/material.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:firebase_database/firebase_database.dart';
import 'package:flutter/foundation.dart'; // Untuk kIsWeb
import 'package:google_fonts/google_fonts.dart'; // Font Medis

void main() async {
  WidgetsFlutterBinding.ensureInitialized();

  // --- 1. INISIALISASI FIREBASE ---
  if (kIsWeb) {
    await Firebase.initializeApp(
      options: const FirebaseOptions(
        // PASTE DATA DARI FIREBASE CONSOLE DI SINI (Yg tadi kamu kirim)
        apiKey: "AIzaSyCg6lPIN8jzmdDUUubLav4z-OyT7K0woH0",
        appId: "1:1083558591944:web:c79fab2094afb5ef7094fd",
        messagingSenderId: "1083558591944",
        projectId: "iot-health-d3068",
        databaseURL: "https://iot-health-d3068-default-rtdb.firebaseio.com",
        storageBucket: "iot-health-d3068.firebasestorage.app",
        measurementId: "G-CK04KEKH7B",
        authDomain: "iot-health-d3068.firebaseapp.com",
      ),
    );
  } else {
    // Android/iOS baca google-services.json
    await Firebase.initializeApp();
  }

  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'IoT Health AI',
      debugShowCheckedModeBanner: false,
      theme: ThemeData(
        useMaterial3: true,
        colorScheme: ColorScheme.fromSeed(seedColor: Colors.blue),
        textTheme: GoogleFonts.latoTextTheme(),
      ),
      home: const DashboardPage(),
    );
  }
}

class DashboardPage extends StatefulWidget {
  const DashboardPage({super.key});

  @override
  State<DashboardPage> createState() => _DashboardPageState();
}

class _DashboardPageState extends State<DashboardPage> {
  // Referensi ke Database "pasien_01"
  final DatabaseReference _dbRef = FirebaseDatabase.instance.ref('pasien_01');

  // Variabel Data (Default Value)
  double tempBody = 0, tempRoom = 0, humidity = 0;
  int bpm = 0, spo2 = 0;
  int aiStatus = 0; // 0:Good, 1:Poor, 2:Bad
  String aiCause = "-";
  bool isConnected = false;

  @override
  void initState() {
    super.initState();
    _listenToData();
  }

  void _listenToData() {
    _dbRef.onValue.listen((event) {
      final data = event.snapshot.value as Map<dynamic, dynamic>?;
      if (data != null) {
        setState(() {
          isConnected = true;
          // Ambil Data Sensor
          final sensor = data['sensor'];
          tempBody = (sensor['body_temp'] ?? 0).toDouble();
          bpm = (sensor['bpm'] ?? 0).toInt();
          spo2 = (sensor['spo2'] ?? 0).toInt();
          tempRoom = (sensor['room_temp'] ?? 0).toDouble();
          humidity = (sensor['humidity'] ?? 0).toDouble();

          // Ambil Data AI (Hasil SVM & SHAP)
          final ai = data['ai'];
          aiStatus = (ai['status_code'] ?? 0).toInt();
          aiCause = (ai['penyebab'] ?? "-").toString();
        });
      }
    });
  }

  @override
  Widget build(BuildContext context) {
    // Tentukan Warna Status berdasarkan AI
    Color statusColor;
    String statusText;
    IconData statusIcon;

    if (aiStatus == 2) {
      statusColor = Colors.red.shade700;
      statusText = "KRITIS / BAHAYA";
      statusIcon = Icons.warning_amber_rounded;
    } else if (aiStatus == 1) {
      statusColor = Colors.orange.shade700;
      statusText = "PERLU PERHATIAN";
      statusIcon = Icons.info_outline;
    } else {
      statusColor = Colors.green.shade700;
      statusText = "KONDISI STABIL";
      statusIcon = Icons.check_circle_outline;
    }

    return Scaffold(
      backgroundColor: Colors.grey.shade100,
      appBar: AppBar(
        title: const Text(
          "ICU Monitoring - Kamar 101",
          style: TextStyle(fontWeight: FontWeight.bold),
        ),
        backgroundColor: Colors.white,
        elevation: 2,
        actions: [
          // Indikator Koneksi Live
          Padding(
            padding: const EdgeInsets.only(right: 16),
            child: Icon(
              Icons.wifi,
              color: isConnected ? Colors.green : Colors.grey,
            ),
          ),
        ],
      ),
      body: SingleChildScrollView(
        padding: const EdgeInsets.all(16),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            // --- BAGIAN 1: AI DIAGNOSIS CARD (Fitur Utama Jurnal) ---
            Text(
              "AI DIAGNOSIS SYSTEM (SVM)",
              style: TextStyle(
                color: Colors.grey.shade600,
                fontWeight: FontWeight.bold,
              ),
            ),
            const SizedBox(height: 8),
            Container(
              width: double.infinity,
              padding: const EdgeInsets.all(20),
              decoration: BoxDecoration(
                color: statusColor,
                borderRadius: BorderRadius.circular(16),
                boxShadow: [
                  BoxShadow(
                    color: statusColor.withOpacity(0.4),
                    blurRadius: 10,
                    offset: const Offset(0, 4),
                  ),
                ],
              ),
              child: Column(
                children: [
                  Icon(statusIcon, size: 60, color: Colors.white),
                  const SizedBox(height: 10),
                  Text(
                    statusText,
                    style: const TextStyle(
                      fontSize: 24,
                      fontWeight: FontWeight.bold,
                      color: Colors.white,
                    ),
                  ),
                  const SizedBox(height: 5),

                  // FITUR SHAP (EXPLAINABLE AI)
                  // Hanya muncul jika kondisi tidak normal
                  if (aiStatus != 0)
                    Container(
                      margin: const EdgeInsets.only(top: 10),
                      padding: const EdgeInsets.symmetric(
                        horizontal: 12,
                        vertical: 6,
                      ),
                      decoration: BoxDecoration(
                        color: Colors.white.withOpacity(0.2),
                        borderRadius: BorderRadius.circular(20),
                      ),
                      child: Text(
                        "Penyebab Utama: $aiCause", // Menampilkan output SHAP
                        style: const TextStyle(
                          color: Colors.white,
                          fontSize: 16,
                          fontWeight: FontWeight.w500,
                        ),
                      ),
                    ),
                  if (aiStatus == 0)
                    const Text(
                      "Parameter Vital dalam batas normal",
                      style: TextStyle(color: Colors.white70),
                    ),
                ],
              ),
            ),

            const SizedBox(height: 24),

            // --- BAGIAN 2: VITAL SIGNS (Sensor Pasien) ---
            Text(
              "DATA FISIOLOGIS PASIEN",
              style: TextStyle(
                color: Colors.grey.shade600,
                fontWeight: FontWeight.bold,
              ),
            ),
            const SizedBox(height: 8),
            Row(
              children: [
                _buildSensorCard(
                  "SpO2",
                  "$spo2",
                  "%",
                  Icons.bloodtype,
                  Colors.blue,
                ),
                const SizedBox(width: 12),
                _buildSensorCard(
                  "Detak Jantung",
                  "$bpm",
                  "BPM",
                  Icons.favorite,
                  Colors.red,
                ),
              ],
            ),
            const SizedBox(height: 12),
            Row(
              children: [
                _buildSensorCard(
                  "Suhu Tubuh",
                  tempBody.toStringAsFixed(1),
                  "°C",
                  Icons.thermostat,
                  Colors.orange,
                ),
              ],
            ),

            const SizedBox(height: 24),

            // --- BAGIAN 3: LINGKUNGAN (Sensor Ruangan) ---
            Text(
              "KONDISI RUANGAN (SUPPORT)",
              style: TextStyle(
                color: Colors.grey.shade600,
                fontWeight: FontWeight.bold,
              ),
            ),
            const SizedBox(height: 8),
            Row(
              children: [
                _buildMiniCard("Suhu Ruang", "$tempRoom °C", Icons.home),
                const SizedBox(width: 12),
                _buildMiniCard("Kelembapan", "$humidity %", Icons.water_drop),
              ],
            ),
          ],
        ),
      ),
    );
  }

  // WIDGET KARTU SENSOR UTAMA
  Widget _buildSensorCard(
    String label,
    String value,
    String unit,
    IconData icon,
    Color color,
  ) {
    return Expanded(
      child: Container(
        padding: const EdgeInsets.all(16),
        decoration: BoxDecoration(
          color: Colors.white,
          borderRadius: BorderRadius.circular(12),
          border: Border.all(color: Colors.grey.shade200),
        ),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Icon(icon, color: color, size: 28),
            const SizedBox(height: 12),
            Text(
              label,
              style: TextStyle(color: Colors.grey.shade600, fontSize: 14),
            ),
            const SizedBox(height: 4),
            Row(
              crossAxisAlignment: CrossAxisAlignment.end,
              children: [
                Text(
                  value,
                  style: const TextStyle(
                    fontSize: 28,
                    fontWeight: FontWeight.bold,
                    color: Colors.black87,
                  ),
                ),
                const SizedBox(width: 4),
                Padding(
                  padding: const EdgeInsets.only(bottom: 6),
                  child: Text(
                    unit,
                    style: TextStyle(
                      fontSize: 14,
                      color: Colors.grey.shade500,
                      fontWeight: FontWeight.bold,
                    ),
                  ),
                ),
              ],
            ),
          ],
        ),
      ),
    );
  }

  // WIDGET KARTU KECIL (RUANGAN)
  Widget _buildMiniCard(String label, String value, IconData icon) {
    return Expanded(
      child: Container(
        padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
        decoration: BoxDecoration(
          color: Colors.grey.shade200,
          borderRadius: BorderRadius.circular(12),
        ),
        child: Row(
          children: [
            Icon(icon, color: Colors.grey.shade600, size: 20),
            const SizedBox(width: 12),
            Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(
                  label,
                  style: TextStyle(color: Colors.grey.shade600, fontSize: 12),
                ),
                Text(
                  value,
                  style: const TextStyle(
                    fontSize: 16,
                    fontWeight: FontWeight.bold,
                    color: Colors.black87,
                  ),
                ),
              ],
            ),
          ],
        ),
      ),
    );
  }
}
