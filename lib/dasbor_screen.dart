import 'package:flutter/material.dart';
import 'package:firebase_database/firebase_database.dart';
import 'theme.dart'; // Pastikan file theme.dart ada

class DasborScreen extends StatefulWidget {
  const DasborScreen({super.key});

  @override
  State<DasborScreen> createState() => _DasborScreenState();
}

class _DasborScreenState extends State<DasborScreen> {
  // --- BAGIAN LOGIC (JANGAN DIUBAH) ---
  
  // Referensi ke path 'Sensor' (Huruf Besar S sesuai Firebase)
  final DatabaseReference _sensorRef = FirebaseDatabase.instance.ref('Sensor');

  // Variabel penampung data
  Map<String, dynamic> sensorData = {
    'temp': 0,      // Suhu Tubuh (LM35)
    'temp_room': 0, // Suhu Ruang (DHT)
    'spo2': 0,      // Oksigen
    'humid': 0,     // Kelembapan
    'bpm': 0,       // Detak Jantung
  };

  @override
  void initState() {
    super.initState();
    _activateListeners();
  }

  void _activateListeners() {
    _sensorRef.onValue.listen((DatabaseEvent event) {
      final data = event.snapshot.value;

      if (data != null && data is Map) {
        if (mounted) {
          setState(() {
            // Mapping data dari Firebase (Kiri: App, Kanan: Firebase)
            sensorData = {
              'temp': (data['temp_lm35'] ?? 0), 
              'temp_room': (data['temp_dht'] ?? 0),
              'spo2': (data['spo2'] ?? 0),
              'humid': (data['humidity'] ?? 0),
              'bpm': (data['bpm'] ?? 0),
            };
          });
        }
      }
    });
  }
  // ------------------------------------

  @override
  Widget build(BuildContext context) {
    // --- BAGIAN TAMPILAN ---
    
    final textTheme = Theme.of(context).textTheme;
    final foregroundColor = Theme.of(context).colorScheme.onSurface;
    
    // Logika Warna Status
    final temp = (sensorData['temp'] as num).toDouble();
    final isHealthy = temp >= 20.0 && temp <= 37.5;
    
    // Warna Status Utama
    final statusColor = isHealthy 
        ? const Color.fromARGB(255, 32, 206, 110) // Hijau
        : AppColors.accentRed; // Merah

    return Scaffold(
      body: SingleChildScrollView(
        padding: const EdgeInsets.all(16.0),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            // Header
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                Row(
                  children: [
                    CircleAvatar(
                      radius: 24,
                      backgroundColor: Colors.grey[300],
                      child: const Icon(Icons.person, color: Colors.grey),
                    ),
                    const SizedBox(width: 12),
                    Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: [
                        Text(
                          'Welcome back,',
                          style: textTheme.bodyMedium!.copyWith(color: AppColors.textGrey, fontSize: 16),
                        ),
                        Text(
                          'Zakia',
                          style: textTheme.titleMedium!.copyWith(color: foregroundColor, fontSize: 20),
                        ),
                      ],
                    ),
                  ],
                ),
                IconButton(
                  icon: Icon(Icons.notifications_none, color: foregroundColor),
                  onPressed: () {},
                ),
              ],
            ),
            const SizedBox(height: 20),
            
            // Status Card
            Container(
              width: double.infinity,
              padding: const EdgeInsets.all(16),
              decoration: BoxDecoration(
                color: statusColor, 
                borderRadius: BorderRadius.circular(12),
              ),
              child: Row(
                children: [
                  const Icon(Icons.check_circle, color: Colors.white, size: 24),
                  const SizedBox(width: 12),
                  Text(
                    isHealthy ? 'Semua Sistem Normal' : 'Peringatan Kesehatan',
                    style: textTheme.titleMedium!.copyWith(
                      color: Colors.white,
                      fontSize: 18,
                    ),
                  ),
                ],
              ),
            ),
            const SizedBox(height: 20),
            
            // Data Grid
            GridView.count(
              crossAxisCount: 2,
              shrinkWrap: true,
              physics: const NeverScrollableScrollPhysics(),
              crossAxisSpacing: 16,
              mainAxisSpacing: 16,
              childAspectRatio: 1.1, // Membuat kartu sedikit lebih lebar agar muat
              children: [
                _buildDataCard(
                  context,
                  'Suhu Tubuh',
                  '${sensorData['temp']} °C',
                  Icons.thermostat_outlined,
                  isHealthy ? Colors.green : Colors.red,
                ),
                _buildDataCard(
                  context,
                  'Suhu Ruang',
                  '${sensorData['temp_room']} °C',
                  Icons.home_outlined,
                  const Color.fromARGB(255, 255, 152, 0),
                ),
                _buildDataCard(
                  context,
                  'Saturasi Oksigen', // Text panjang aman di sini
                  '${sensorData['spo2']} %',
                  Icons.cloud_upload_outlined,
                  const Color.fromARGB(255, 76, 175, 80),
                ),
                _buildDataCard(
                  context,
                  'Kelembapan',
                  '${sensorData['humid']} %',
                  Icons.opacity,
                  const Color.fromARGB(255, 33, 150, 243),
                ),
              ],
            ),
            const SizedBox(height: 20),
            
            // Heart Rate Card
            Card(
              child: Padding(
                padding: const EdgeInsets.all(16),
                child: Row(
                  children: [
                    const Icon(
                      Icons.favorite, 
                      color: Color.fromARGB(255, 236, 93, 139), 
                      size: 36
                    ),
                    const SizedBox(width: 16),
                    Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: [
                        Text(
                          'Detak Jantung',
                          style: textTheme.titleMedium!.copyWith(fontSize: 16),
                        ),
                        Text(
                          '${sensorData['bpm']} bpm',
                          style: textTheme.titleLarge!.copyWith(
                            fontSize: 30,
                            color: const Color.fromARGB(255, 236, 93, 139),
                          ),
                        ),
                      ],
                    ),
                  ],
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildDataCard(
    BuildContext context,
    String title,
    String value,
    IconData icon,
    Color color,
  ) {
    final textTheme = Theme.of(context).textTheme;
    return Card(
      elevation: 2,
      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
      child: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 8.0, vertical: 16.0),
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Icon(icon, size: 32, color: color), // Ikon sedikit diperkecil biar proporsional
            const SizedBox(height: 8),
            
            // --- BAGIAN JUDUL YANG DIPERKECIL ---
            Text(
              title,
              style: textTheme.bodyMedium!.copyWith(
                fontSize: 12, // Font size diperkecil (sebelumnya default 14-16)
                color: Colors.grey[700],
                fontWeight: FontWeight.w500,
              ),
              textAlign: TextAlign.center,
              maxLines: 1, // Memaksa 1 baris
              overflow: TextOverflow.ellipsis, // Titik-titik (...) kalau kepanjangan
            ),
            // ------------------------------------
            
            const SizedBox(height: 4),
            Text(
              value,
              style: textTheme.titleLarge!.copyWith(
                color: color, 
                fontSize: 22, // Sedikit disesuaikan biar pas
                fontWeight: FontWeight.bold
              ),
              textAlign: TextAlign.center,
            ),
          ],
        ),
      ),
    );
  }
}