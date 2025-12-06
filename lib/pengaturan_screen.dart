import 'package:flutter/material.dart';
import 'theme.dart'; // Import AppColors

class PengaturanScreen extends StatefulWidget {
  const PengaturanScreen({super.key});

  @override
  State<PengaturanScreen> createState() => _PengaturanScreenState();
}

class _PengaturanScreenState extends State<PengaturanScreen> {
  bool _notificationsEnabled = true;

  @override
  Widget build(BuildContext context) {
    final textTheme = Theme.of(context).textTheme;
    final foregroundColor = Theme.of(context).colorScheme.onSurface;
    final successColor = const Color.fromARGB(255, 2, 115, 121); // Untuk Switch

    return Scaffold(
      appBar: AppBar(title: const Text('Pengaturan')),
      body: SingleChildScrollView(
        padding: const EdgeInsets.all(16.0),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            // Profile Section
            Card(
              child: ListTile(
                leading: CircleAvatar(
                  radius: 28, // Perbesar avatar
                  backgroundColor: AppColors.primaryBlue.withOpacity(0.1), // Gunakan primary color baru
                  child: Icon(Icons.person, color: AppColors.primaryBlue),
                ),
                title: Text(
                  'Zakia',
                  style: textTheme.titleMedium!.copyWith(color: foregroundColor), // Perbesar teks
                ),
                subtitle: Text(
                  'Lihat & edit profil',
                  style: textTheme.bodyLarge!.copyWith(color: AppColors.textGrey), // Perbesar teks
                ),
                trailing: Icon(Icons.chevron_right, color: AppColors.textGrey),
                onTap: () {},
              ),
            ),
            const SizedBox(height: 20),
            // Account Section
            Text(
              'AKUN',
              style: textTheme.bodyMedium!.copyWith(
                fontSize: 16, // Perbesar teks
                fontWeight: FontWeight.bold,
                color: AppColors.textGrey,
              ),
            ),
            const SizedBox(height: 8),
            Card(
              child: Column(
                children: [
                  _buildSettingsTile(
                    context,
                    title: 'Nama Pengguna',
                    onTap: () {},
                  ),
                  const Divider(height: 1),
                  _buildSettingsTile(
                    context,
                    title: 'Kata Sandi',
                    onTap: () {},
                  ),
                  const Divider(height: 1),
                  _buildSettingsTile(
                    context,
                    title: 'ID Klien',
                    onTap: () {},
                  ),
                ],
              ),
            ),
            const SizedBox(height: 20),
            // Settings Section
            Text(
              'PENGATURAN',
              style: textTheme.bodyMedium!.copyWith(
                fontSize: 16, // Perbesar teks
                fontWeight: FontWeight.bold,
                color: AppColors.textGrey,
              ),
            ),
            const SizedBox(height: 8),
            Card(
              child: Column(
                children: [
                  ListTile(
                    leading: Icon(Icons.notifications, color: foregroundColor),
                    title: Text(
                      'Notifikasi',
                      style: textTheme.bodyLarge, // Perbesar teks
                    ),
                    trailing: Switch(
                      value: _notificationsEnabled,
                      onChanged: (value) {
                        setState(() {
                          _notificationsEnabled = value;
                        });
                      },
                      activeColor: successColor, // Menggunakan successColor
                    ),
                  ),
                  const Divider(height: 1),
                  ListTile(
                    leading: Icon(Icons.info, color: foregroundColor),
                    title: Text(
                      'Tentang Aplikasi',
                      style: textTheme.bodyLarge, // Perbesar teks
                    ),
                    trailing: Icon(Icons.chevron_right, color: AppColors.textGrey),
                    onTap: () {},
                  ),
                ],
              ),
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildSettingsTile(
    BuildContext context, {
    required String title,
    required VoidCallback onTap,
  }) {
    final textTheme = Theme.of(context).textTheme;
    return ListTile(
      title: Text(
        title,
        style: textTheme.bodyLarge, // Perbesar teks
      ),
      trailing: Icon(Icons.chevron_right, color: AppColors.textGrey),
      onTap: onTap,
    );
  }
}
