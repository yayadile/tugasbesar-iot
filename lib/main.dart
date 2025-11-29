import 'package:flutter/material.dart';
import 'dasbor_screen.dart';
import 'riwayat_screen.dart';
import 'pengaturan_screen.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'IoT Health Monitor',
      theme: ThemeData(
        primaryColor: const Color(0xFF5AB693),
        colorScheme: ColorScheme.fromSeed(
          seedColor: const Color(0xFF5AB693),
          primary: const Color(0xFF5AB693),
        ),
        useMaterial3: true,
      ),
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

  final List<Widget> _screens = const [
    DasborScreen(),
    RiwayatScreen(),
    PengaturanScreen(),
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
        selectedItemColor: const Color(0xFF5AB693),
        onTap: _onItemTapped,
      ),
    );
  }
}
