import 'package:flutter/material.dart';
import 'package:firebase_database/firebase_database.dart';
import 'theme.dart';

class PengaturanScreen extends StatefulWidget {
  const PengaturanScreen({super.key});

  @override
  State<PengaturanScreen> createState() => _PengaturanScreenState();
}

class _PengaturanScreenState extends State<PengaturanScreen> {
  final String userId = 'user_123'; 
  late DatabaseReference _userRef;

  final _formKey = GlobalKey<FormState>();
  final TextEditingController _nameController = TextEditingController();
  final TextEditingController _emailController = TextEditingController();
  final TextEditingController _phoneController = TextEditingController();
  final TextEditingController _ageController = TextEditingController();
  final TextEditingController _weightController = TextEditingController();

  bool _isLoading = false;

  @override
  void initState() {
    super.initState();
    _userRef = FirebaseDatabase.instance.ref('users/$userId');
    _loadUserData();
  }

  void _loadUserData() {
    _userRef.onValue.listen((event) {
      final data = event.snapshot.value;
      if (data != null && data is Map) {
        if (mounted) {
          setState(() {
            _nameController.text = data['name'] ?? '';
            _emailController.text = data['email'] ?? '';
            _phoneController.text = data['phone'] ?? '';
            _ageController.text = data['age']?.toString() ?? '';
            _weightController.text = data['weight']?.toString() ?? '';
          });
        }
      }
    });
  }

  Future<void> _saveProfile() async {
    if (_formKey.currentState!.validate()) {
      setState(() => _isLoading = true);

      try {
        await _userRef.update({
          'name': _nameController.text,
          'email': _emailController.text,
          'phone': _phoneController.text,
          'age': _ageController.text,
          'weight': _weightController.text,
        });

        if (mounted) {
          ScaffoldMessenger.of(context).showSnackBar(
            const SnackBar(content: Text('Profil berhasil diperbarui!'), backgroundColor: Colors.green),
          );
        }
      } catch (e) {
        if (mounted) {
          ScaffoldMessenger.of(context).showSnackBar(
            SnackBar(content: Text('Gagal: $e'), backgroundColor: Colors.red),
          );
        }
      } finally {
        if (mounted) setState(() => _isLoading = false);
      }
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Pengaturan Profil'),
        backgroundColor: Colors.white,
        foregroundColor: Colors.black,
        elevation: 0,
      ),
      body: SingleChildScrollView(
        padding: const EdgeInsets.all(16.0),
        child: Form(
          key: _formKey,
          child: Column(
            children: [
              const CircleAvatar(
                radius: 40,
                child: Icon(Icons.person, size: 40),
              ),
              const SizedBox(height: 20),
              _buildTextField("Nama Lengkap", _nameController, Icons.person),
              const SizedBox(height: 12),
              _buildTextField("Email", _emailController, Icons.email),
              const SizedBox(height: 12),
              _buildTextField("No. Telepon", _phoneController, Icons.phone),
              const SizedBox(height: 12),
              Row(
                children: [
                  Expanded(child: _buildTextField("Umur (Thn)", _ageController, Icons.cake)),
                  const SizedBox(width: 12),
                  Expanded(child: _buildTextField("Berat (Kg)", _weightController, Icons.monitor_weight)),
                ],
              ),
              const SizedBox(height: 30),
              SizedBox(
                width: double.infinity,
                height: 50,
                child: ElevatedButton(
                  onPressed: _isLoading ? null : _saveProfile,
                  style: ElevatedButton.styleFrom(
                    backgroundColor: AppColors.primaryBlue,
                    shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(10)),
                  ),
                  child: _isLoading 
                    ? const CircularProgressIndicator(color: Colors.white)
                    : const Text('SIMPAN PERUBAHAN', style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold)),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }

  Widget _buildTextField(String label, TextEditingController controller, IconData icon) {
    return TextFormField(
      controller: controller,
      decoration: InputDecoration(
        labelText: label,
        prefixIcon: Icon(icon),
        border: OutlineInputBorder(borderRadius: BorderRadius.circular(10)),
      ),
      validator: (value) => value!.isEmpty ? 'Tidak boleh kosong' : null,
    );
  }
}