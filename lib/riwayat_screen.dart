import 'package:flutter/material.dart';
import 'package:fl_chart/fl_chart.dart';

class MonitoringCard extends StatelessWidget {
  final String title;
  final IconData icon;
  final String lastUpdated;
  final String mainValue;
  final String status;
  final Color lineColor;
  final List<FlSpot> chartData;

  const MonitoringCard({
    super.key,
    required this.title,
    required this.icon,
    required this.lastUpdated,
    required this.mainValue,
    required this.status,
    required this.lineColor,
    required this.chartData,
  });

  @override
  Widget build(BuildContext context) {
    return Card(
      elevation: 4,
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(12),
      ),
      child: Padding(
        padding: const EdgeInsets.all(16),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Row(
              children: [
                Icon(icon, size: 24, color: lineColor),
                const SizedBox(width: 8),
                Text(
                  title,
                  style: const TextStyle(
                    fontSize: 18,
                    fontWeight: FontWeight.w500,
                  ),
                ),
              ],
            ),
            const SizedBox(height: 8),
            Text(
              lastUpdated,
              style: const TextStyle(fontSize: 12, color: Colors.grey),
            ),
            const SizedBox(height: 16),
            Text(
              mainValue,
              style: TextStyle(
                fontSize: 32,
                fontWeight: FontWeight.bold,
                color: lineColor,
              ),
            ),
            const SizedBox(height: 8),
            Text(
              status,
              style: const TextStyle(fontSize: 14, color: Colors.grey),
            ),
            const SizedBox(height: 16),
            SizedBox(
              height: 150,
              child: LineChart(
                LineChartData(
                  gridData: const FlGridData(show: false),
                  titlesData: FlTitlesData(
                    bottomTitles: AxisTitles(
                      sideTitles: SideTitles(
                        showTitles: true,
                        interval: 6,
                        getTitlesWidget: (value, meta) {
                          switch (value.toInt()) {
                            case 0:
                              return const Text('12 AM');
                            case 6:
                              return const Text('6 AM');
                            case 12:
                              return const Text('12 PM');
                            case 18:
                              return const Text('6 PM');
                            default:
                              return const Text('');
                          }
                        },
                      ),
                    ),
                    leftTitles:
                        const AxisTitles(sideTitles: SideTitles(showTitles: false)),
                    topTitles:
                        const AxisTitles(sideTitles: SideTitles(showTitles: false)),
                    rightTitles:
                        const AxisTitles(sideTitles: SideTitles(showTitles: false)),
                  ),
                  borderData: FlBorderData(show: false),
                  lineBarsData: [
                    LineChartBarData(
                      spots: chartData,
                      isCurved: true,
                      color: lineColor,
                      barWidth: 3,
                      belowBarData: BarAreaData(show: false),
                      dotData: const FlDotData(show: false),
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

class RiwayatScreen extends StatelessWidget {
  const RiwayatScreen({super.key});

  @override
  Widget build(BuildContext context) {
    return DefaultTabController(
      length: 3,
      child: Scaffold(
        appBar: AppBar(
          title: const Text('Riwayat'),
          bottom: const TabBar(
            tabs: [
              Tab(text: 'Suhu & Lingkungan'),
              Tab(text: 'Detak Jantung'),
              Tab(text: 'Saturasi Oksigen'),
            ],
          ),
        ),
        body: const TabBarView(
          children: [
            SuhuLingkunganTab(),
            DetakJantungTab(),
            SpO2Tab(),
          ],
        ),
      ),
    );
  }
}

// =====================
// SUHU LINGKUNGAN TAB
// =====================

class SuhuLingkunganTab extends StatelessWidget {
  const SuhuLingkunganTab({super.key});

  @override
  Widget build(BuildContext context) {
    return SingleChildScrollView(
      padding: const EdgeInsets.all(16.0),
      child: Column(
        children: [
          MonitoringCard(
            title: 'Suhu Tubuh',
            icon: Icons.thermostat,
            lastUpdated: 'Terakhir diperbarui: 2 menit lalu',
            mainValue: '36.8°C',
            status: 'Normal',
            lineColor: Colors.red,
            chartData: const [
              FlSpot(0, 36.5),
              FlSpot(6, 36.8),
              FlSpot(12, 37.0),
              FlSpot(18, 36.7),
            ],
          ),
          const SizedBox(height: 16),
          MonitoringCard(
            title: 'Suhu Ruangan',
            icon: Icons.home,
            lastUpdated: 'Terakhir diperbarui: 2 menit lalu',
            mainValue: '28.5°C',
            status: 'Nyaman',
            lineColor: Colors.orange,
            chartData: const [
              FlSpot(0, 27.0),
              FlSpot(6, 28.5),
              FlSpot(12, 29.0),
              FlSpot(18, 27.5),
            ],
          ),
          const SizedBox(height: 16),
          MonitoringCard(
            title: 'Kelembapan Ruangan',
            icon: Icons.water_drop,
            lastUpdated: 'Terakhir diperbarui: 2 menit lalu',
            mainValue: '45%',
            status: 'Nyaman',
            lineColor: Colors.blue,
            chartData: const [
              FlSpot(0, 40),
              FlSpot(6, 45),
              FlSpot(12, 50),
              FlSpot(18, 42),
            ],
          ),
        ],
      ),
    );
  }
}

// =====================
// DETAK JANTUNG TAB
// =====================

class DetakJantungTab extends StatelessWidget {
  const DetakJantungTab({super.key});

  @override
  Widget build(BuildContext context) {
    return SingleChildScrollView(
      padding: const EdgeInsets.all(16.0),
      child: Column(
        children: [
          MonitoringCard(
            title: 'Detak Jantung',
            icon: Icons.favorite,
            lastUpdated: 'Terakhir diperbarui: 2 menit lalu',
            mainValue: '72 BPM',
            status: 'Normal',
            lineColor: const Color.fromARGB(255, 236, 93, 139),
            chartData: const [
              FlSpot(0, 65),
              FlSpot(6, 72),
              FlSpot(12, 78),
              FlSpot(18, 70),
            ],
          ),
          const SizedBox(height: 20),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              _buildStatCard('Rata-Rata', '70'),
              _buildStatCard('Tertinggi', '85'),
              _buildStatCard('Terendah', '60'),
            ],
          ),
          const SizedBox(height: 20),
          SizedBox(
            width: double.infinity,
            child: ElevatedButton(
              onPressed: () {},
              style: ElevatedButton.styleFrom(
                backgroundColor: const Color.fromARGB(255, 0, 173, 181),
                padding: const EdgeInsets.symmetric(vertical: 16),
                shape: RoundedRectangleBorder(
                  borderRadius: BorderRadius.circular(12),
                ),
              ),
              child: const Text(
                'Mulai Pengukuran Baru',
                style: TextStyle(fontSize: 16, color: Colors.white),
              ),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildStatCard(String label, String value) {
    return Card(
      elevation: 4,
      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
      child: Padding(
        padding: const EdgeInsets.all(16),
        child: Column(
          children: [
            Text(
              label,
              style: const TextStyle(fontSize: 14, color: Colors.grey),
            ),
            const SizedBox(height: 4),
            Text(
              value,
              style: const TextStyle(fontSize: 18, fontWeight: FontWeight.bold),
            ),
          ],
        ),
      ),
    );
  }
}

// =====================
// SATURASI OKSIGEN TAB
// =====================

class SpO2Tab extends StatelessWidget {
  const SpO2Tab({super.key});

  @override
  Widget build(BuildContext context) {
    return SingleChildScrollView(
      padding: const EdgeInsets.all(16.0),
      child: Column(
        children: [
          MonitoringCard(
            title: 'Saturasi Oksigen',
            icon: Icons.bloodtype,
            lastUpdated: 'Terakhir diperbarui: 2 menit lalu',
            mainValue: '98%',
            status: 'Normal',
            lineColor: Colors.green,
            chartData: const [
              FlSpot(0, 95),
              FlSpot(6, 98),
              FlSpot(12, 99),
              FlSpot(18, 97),
            ],
          ),
          const SizedBox(height: 20),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              _buildStatCard('Rata-Rata', '96'),
              _buildStatCard('Tertinggi', '99'),
              _buildStatCard('Terendah', '92'),
            ],
          ),
          const SizedBox(height: 20),
          SizedBox(
            width: double.infinity,
            child: ElevatedButton(
              onPressed: () {},
              style: ElevatedButton.styleFrom(
                backgroundColor: const Color.fromARGB(255, 0, 173, 181),
                padding: const EdgeInsets.symmetric(vertical: 16),
                shape: RoundedRectangleBorder(
                  borderRadius: BorderRadius.circular(12),
                ),
              ),
              child: const Text(
                'Mulai Pengukuran Baru',
                style: TextStyle(fontSize: 16, color: Colors.white),
              ),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildStatCard(String label, String value) {
    return Card(
      elevation: 4,
      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
      child: Padding(
        padding: const EdgeInsets.all(16),
        child: Column(
          children: [
            Text(
              label,
              style: const TextStyle(fontSize: 14, color: Colors.grey),
            ),
            const SizedBox(height: 4),
            Text(
              value,
              style: const TextStyle(fontSize: 18, fontWeight: FontWeight.bold),
            ),
          ],
        ),
      ),
    );
  }
}
