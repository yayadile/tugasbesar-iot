import 'package:flutter/material.dart';
import 'theme.dart'; // Import AppColors

class DasborScreen extends StatelessWidget {
  const DasborScreen({super.key});

  @override
  Widget build(BuildContext context) {
    // Akses TextTheme dan ColorScheme dari konteks
    final textTheme = Theme.of(context).textTheme;
    final foregroundColor = Theme.of(context).colorScheme.onSurface; // AppColors.textDark
    final successColor = const Color.fromARGB(255, 32, 206, 110); // Warna Hijau Status Normal

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
                          style: textTheme.bodyMedium!.copyWith(color: AppColors.textGrey, fontSize: 16), // Perbesar teks
                        ),
                        Text(
                          'Zakia',
                          style: textTheme.titleMedium!.copyWith(color: foregroundColor, fontSize: 20), // Perbesar teks
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
                color: successColor, // Menggunakan successGreen dari AppColors
                borderRadius: BorderRadius.circular(12),
              ),
              child: Row(
                children: [
                  const Icon(Icons.check_circle, color: Colors.white, size: 24),
                  const SizedBox(width: 12),
                  Text(
                    'Semua Sistem Normal',
                    style: textTheme.titleMedium!.copyWith(
                      color: Colors.white,
                      fontSize: 18, // Perbesar teks
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
              children: [
                _buildDataCard(
                  context,
                  'Suhu Tubuh',
                  '36.8 °C',
                  Icons.thermostat_outlined,
                  Colors.red, // Warna ikon/nilai tetap
                ),
                _buildDataCard(
                  context,
                  'Suhu Ruang',
                  '20.0 °C',
                  Icons.home_outlined,
                  const Color.fromARGB(255, 255, 152, 0), // Warna ikon/nilai tetap
                ),
                _buildDataCard(
                  context,
                  'Saturasi Oksigen',
                  '66 %',
                  Icons.cloud_upload_outlined,
                  const Color.fromARGB(255, 76, 175, 80), // Warna ikon/nilai tetap
                ),
                _buildDataCard(
                  context,
                  'Kelembapan',
                  '66 %',
                  Icons.opacity,
                  const Color.fromARGB(255, 33, 150, 243), // Warna ikon/nilai tetap
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
                    const Icon(Icons.favorite, color: Color.fromARGB(255, 236, 93, 139
                    ), size: 36), // Perbesar ikon
                    const SizedBox(width: 16),
                    Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: [
                        Text(
                          'Detak Jantung',
                          style: textTheme.titleMedium!.copyWith(fontSize: 18), // Perbesar teks
                        ),
                        Text(
                          '72 bpm',
                          style: textTheme.titleLarge!.copyWith(
                            fontSize: 30, // Perbesar teks
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
      child: Padding(
        padding: const EdgeInsets.all(16),
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Icon(icon, size: 36, color: color), // Perbesar ikon
            const SizedBox(height: 8),
            Text(
              title,
              style: textTheme.bodyLarge, // Menggunakan bodyLarge (ukuran 16)
              textAlign: TextAlign.center,
            ),
            Text(
              value,
              style: textTheme.titleLarge!.copyWith(color: color, fontSize: 24), // Perbesar nilai
              textAlign: TextAlign.center,
            ),
          ],
        ),
      ),
    );
  }
}
