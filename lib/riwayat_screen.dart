import 'package:flutter/material.dart';
import 'package:firebase_database/firebase_database.dart';
import 'package:fl_chart/fl_chart.dart'; // Pastikan library ini sudah terinstall
import 'theme.dart';

class RiwayatScreen extends StatefulWidget {
  const RiwayatScreen({super.key});

  @override
  State<RiwayatScreen> createState() => _RiwayatScreenState();
}

class _RiwayatScreenState extends State<RiwayatScreen> {
  // Pastikan path-nya 'Sensor' (Huruf Besar S sesuai Firebase)
  final DatabaseReference _sensorRef = FirebaseDatabase.instance.ref('Sensor');

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Riwayat Kesehatan'),
        backgroundColor: Colors.white,
        foregroundColor: Colors.black,
        elevation: 0,
      ),
      body: StreamBuilder<DatabaseEvent>(
        stream: _sensorRef.onValue,
        builder: (context, snapshot) {
          if (snapshot.hasError) {
            return Center(child: Text('Error: ${snapshot.error}'));
          }
          if (snapshot.connectionState == ConnectionState.waiting) {
            return const Center(child: CircularProgressIndicator());
          }

          final data = snapshot.data?.snapshot.value;
          Map<dynamic, dynamic> sensorMap = {};
          if (data != null && data is Map) {
             sensorMap = data;
          }

          // MAPPING DATA (Parsing ke double biar aman)
          final tempBody = double.tryParse(sensorMap['temp_lm35'].toString()) ?? 0.0;
          final tempRoom = double.tryParse(sensorMap['temp_dht'].toString()) ?? 0.0;
          final spo2 = double.tryParse(sensorMap['spo2'].toString()) ?? 0.0;
          final bpm = double.tryParse(sensorMap['bpm'].toString()) ?? 0.0;
          final humid = double.tryParse(sensorMap['humidity'].toString()) ?? 0.0;

          return ListView(
            padding: const EdgeInsets.all(16),
            children: [
              // 1. Suhu Tubuh
              _MonitoringCard(
                title: 'Suhu Tubuh',
                valueStr: '${tempBody.toStringAsFixed(1)} °C',
                rawValue: tempBody,
                icon: Icons.thermostat,
                lineColor: Colors.red,
                minY: 30, // Batas Bawah Grafik
                maxY: 45, // Batas Atas Grafik
              ),
              const SizedBox(height: 16),

              // 2. Suhu Ruang
              _MonitoringCard(
                title: 'Suhu Ruang',
                valueStr: '${tempRoom.toStringAsFixed(1)} °C',
                rawValue: tempRoom,
                icon: Icons.home,
                lineColor: Colors.orange,
                minY: 10,
                maxY: 40,
              ),
              const SizedBox(height: 16),

              // 3. Saturasi Oksigen
              _MonitoringCard(
                title: 'Saturasi Oksigen',
                valueStr: '${spo2.toInt()} %',
                rawValue: spo2,
                icon: Icons.cloud,
                lineColor: Colors.green,
                minY: 80,
                maxY: 100,
              ),
              const SizedBox(height: 16),

              // 4. Detak Jantung
              _MonitoringCard(
                title: 'Detak Jantung',
                valueStr: '${bpm.toInt()} bpm',
                rawValue: bpm,
                icon: Icons.favorite,
                lineColor: Colors.pink,
                minY: 40,
                maxY: 150,
              ),
               const SizedBox(height: 16),

              // 5. Kelembapan
              _MonitoringCard(
                title: 'Kelembapan',
                valueStr: '${humid.toInt()} %',
                rawValue: humid,
                icon: Icons.opacity,
                lineColor: Colors.blue,
                minY: 0,
                maxY: 100,
              ),
            ],
          );
        },
      ),
    );
  }
}

// --- WIDGET KARTU DENGAN GRAFIK ANTI-BOCOR ---
class _MonitoringCard extends StatefulWidget {
  final String title;
  final String valueStr;
  final double rawValue;
  final IconData icon;
  final Color lineColor;
  final double minY;
  final double maxY;

  const _MonitoringCard({
    super.key,
    required this.title,
    required this.valueStr,
    required this.rawValue,
    required this.icon,
    required this.lineColor,
    required this.minY,
    required this.maxY,
  });

  @override
  State<_MonitoringCard> createState() => _MonitoringCardState();
}

class _MonitoringCardState extends State<_MonitoringCard> {
  List<FlSpot> spots = [];
  double xValue = 0;

  @override
  void initState() {
    super.initState();
    // Isi data awal biar grafik gak kosong (Flat di nilai minimum)
    for (int i = 0; i < 20; i++) {
      spots.add(FlSpot(i.toDouble(), widget.minY));
    }
    xValue = 19;
  }

  @override
  void didUpdateWidget(covariant _MonitoringCard oldWidget) {
    super.didUpdateWidget(oldWidget);
    if (oldWidget.rawValue != widget.rawValue) {
      xValue++;
      spots.add(FlSpot(xValue, widget.rawValue));
      if (spots.length > 20) {
        spots.removeAt(0); // Buang data lama biar memori hemat
      }
    }
  }

  @override
  Widget build(BuildContext context) {
    return Card(
      elevation: 3,
      // INI KUNCINYA: Memotong grafik yang "tumpah" keluar kartu
      clipBehavior: Clip.antiAlias,
      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
      child: Padding(
        padding: const EdgeInsets.all(16),
        child: Column(
          children: [
            // Header Judul & Nilai
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                Row(
                  children: [
                    Icon(widget.icon, size: 24, color: widget.lineColor),
                    const SizedBox(width: 8),
                    Text(widget.title, style: const TextStyle(fontWeight: FontWeight.bold)),
                  ],
                ),
                Text(widget.valueStr, style: const TextStyle(fontSize: 18, fontWeight: FontWeight.bold)),
              ],
            ),
            const SizedBox(height: 20),
            
            // Area Grafik
            SizedBox(
              height: 120,
              width: double.infinity,
              child: LineChart(
                LineChartData(
                  gridData: const FlGridData(show: false),
                  titlesData: const FlTitlesData(show: false),
                  borderData: FlBorderData(show: false),
                  minY: widget.minY,
                  maxY: widget.maxY,
                  // Clip juga di dalam area chart supaya garisnya rapi
                  clipData: const FlClipData.all(),
                  lineBarsData: [
                    LineChartBarData(
                      spots: spots,
                      isCurved: true,
                      color: widget.lineColor,
                      barWidth: 3,
                      isStrokeCapRound: true,
                      dotData: const FlDotData(show: false),
                      belowBarData: BarAreaData(
                        show: true,
                        // Gradasi warna transparan
                        gradient: LinearGradient(
                          colors: [
                            widget.lineColor.withOpacity(0.3),
                            widget.lineColor.withOpacity(0.0),
                          ],
                          begin: Alignment.topCenter,
                          end: Alignment.bottomCenter,
                        ),
                      ),
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
} 