import 'package:flutter/material.dart';

class AppColors {
  // --- WARNA SKEMA KESEHATAN YANG LEBIH LEMBUT & BERSIH ---

  // Primary (Utama): Soft Teal/Ocean Blue (Lebih menenangkan dari Vivid Blue)
  static const Color primaryBlue = Color(0xFF00ADB5);

  // Accent (Aksen/Kritis): Muted Red (Kurang mencolok)
  static const Color accentRed = Color(0xFFFF5252);

  // Success (Aman/Normal): Calming Green (Digunakan untuk status "Normal" dan tombol)
  static const Color successGreen = Color(0xFF5AB693); // Mempertahankan warna tombol yang sudah baik

  // Background (Latar Belakang): Sangat Putih
  static const Color backgroundLight = Color(0xFFFFFFFF); // Lebih putih untuk kesan bersih

  // Surface (Permukaan Card/Widget): Hampir Putih
  static const Color surfaceWhite = Color(0xFFFEFEFE);

  // Text/Foreground (Teks Gelap): Dark Navy (Kontras tinggi)
  static const Color textDark = Color(0xFF222831); // Warna teks gelap yang lebih dalam

  // Warna Abu-abu Sekunder
  static const Color textGrey = Color(0xFF6C757D);
}

class AppTheme {
  static ThemeData get theme {
    // Definisikan warna di awal untuk kemudahan penggunaan
    const Color primary = AppColors.primaryBlue;
    const Color background = AppColors.backgroundLight;
    const Color surface = AppColors.surfaceWhite;
    const Color foreground = AppColors.textDark;

    return ThemeData(
      useMaterial3: true,

      primaryColor: primary,
      scaffoldBackgroundColor: background,

      colorScheme: ColorScheme.fromSeed(
        seedColor: primary,
        primary: primary,
        secondary: AppColors.successGreen,
        surface: surface,
        onSurface: foreground,
        error: AppColors.accentRed,
        background: background, // Tambahkan background
        onBackground: foreground, // Tambahkan onBackground
      ),

      appBarTheme: const AppBarTheme(
        backgroundColor: primary,
        foregroundColor: surface, // Warna teks di AppBar (putih)
        elevation: 2, // Sedikit bayangan
        centerTitle: true,
        titleTextStyle: TextStyle(fontSize: 20, fontWeight: FontWeight.w600, color: surface), // Perbesar teks AppBar
      ),

      textTheme: TextTheme(
        // Perbesar dan pastikan kontras yang baik
        bodyLarge: TextStyle(color: foreground, fontSize: 16),
        bodyMedium: TextStyle(color: foreground, fontSize: 14),
        titleLarge: TextStyle(color: foreground, fontWeight: FontWeight.bold, fontSize: 22),
        titleMedium: TextStyle(color: foreground, fontWeight: FontWeight.w600, fontSize: 18),
        labelLarge: TextStyle(color: foreground, fontSize: 16),
      ),

      // Tema untuk BottomNavigationBar
      bottomNavigationBarTheme: BottomNavigationBarThemeData(
        selectedItemColor: primary, // Item terpilih menggunakan primary color baru
        unselectedItemColor: AppColors.textGrey, // Item tidak terpilih abu-abu
        backgroundColor: surface,
        selectedLabelStyle: const TextStyle(fontWeight: FontWeight.w600),
        elevation: 8,
      ),

      // Tema untuk Card
      cardTheme: CardThemeData(
        color: surface,
        elevation: 2,
        shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(12)),
      ),

      // Tema untuk TabBar
      tabBarTheme: TabBarThemeData(
        labelColor: surface,
        unselectedLabelColor: surface.withOpacity(0.7),
        indicatorColor: surface,
      ),
    );
  }
}
