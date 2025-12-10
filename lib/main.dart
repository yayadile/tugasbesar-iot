import 'package:flutter/material.dart';
import 'package:firebase_core/firebase_core.dart';
// import 'firebase_options.dart'; // <--- HAPUS ATAU KOMENTARI BARIS INI
import 'dasbor_screen.dart';
import 'riwayat_screen.dart';
import 'pengaturan_screen.dart';
import 'theme.dart';

void main() async {
  WidgetsFlutterBinding.ensureInitialized();
  
  // --- BAGIAN YANG DIEDIT ---
  // Kita hapus parameter 'options'.
  // Dengan begini, Flutter akan otomatis mencari file 'google-services.json'
  // di folder android/app yang sudah kamu setup tadi.
  await Firebase.initializeApp(); 
  // --------------------------

  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false, // Opsional: Biar pita 'debug' hilang
      title: 'IoT Health Monitor',
      theme: AppTheme.theme, 
      home: const HomePage(),
    );
  }
}

class HomePage extends StatefulWidget {
  const HomePage({super.key});

  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  int _selectedIndex = 0;

  final List<Widget> _screens = [
    const DasborScreen(),
    const RiwayatScreen(),
    const PengaturanScreen(),
  ];

  void _onItemTapped(int index) {
    setState(() {
      _selectedIndex = index;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: _screens[_selectedIndex],
      bottomNavigationBar: BottomNavigationBar(
        items: const <BottomNavigationBarItem>[
          BottomNavigationBarItem(icon: Icon(Icons.home), label: 'Dasbor'),
          BottomNavigationBarItem(
            icon: Icon(Icons.bar_chart),
            label: 'Riwayat',
          ),
          BottomNavigationBarItem(
            icon: Icon(Icons.settings),
            label: 'Pengaturan',
          ),
        ],
        currentIndex: _selectedIndex,
        onTap: _onItemTapped,
      ),
    );
  }
}