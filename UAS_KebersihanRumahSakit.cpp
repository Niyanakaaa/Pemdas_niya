#include <iostream>
#include <string>
#include <vector>

void displayHeader() {
    std::cout << "===========================================\n";
    std::cout << "     Sistem Pelaporan Kebersihan Rumah Sakit\n";
    std::cout << "===========================================\n\n";
}

void displayOptions() {
    std::cout << "Ruangan/Fasilitas yang tersedia:\n";
    std::cout << "1. Kamar Pasien\n";
    std::cout << "2. Ruang Tunggu\n";
    std::cout << "3. Kamar Mandi\n";
    std::cout << "4. Lorong\n";
    std::cout << "5. Ruang Rawat Inap\n";
}

int main() {
    std::string namaPelapor;
    int pilihanRuangan;
    std::string keterangan;

    displayHeader();

    // Input Nama Pelapor
    std::cout << "Masukkan Nama Lengkap Anda: ";
    std::getline(std::cin, namaPelapor);

    // Pilih Ruangan
    displayOptions();
    std::cout << "Pilih nomor ruangan/fasilitas: ";
    std::cin >> pilihanRuangan;
    std::cin.ignore(); // Mengabaikan karakter newline dari input sebelumnya

    if (pilihanRuangan < 1 || pilihanRuangan > 5) {
        std::cerr << "Pilihan tidak valid. Program akan keluar.\n";
        return 1;
    }

    // Input Keterangan
    std::cout << "Jelaskan kondisi kebersihan dan masalah yang perlu diperbaiki: ";
    std::getline(std::cin, keterangan);

    // Output Laporan
    std::vector<std::string> ruangan = {
        "Kamar Pasien",
        "Ruang Tunggu",
        "Kamar Mandi",
        "Lorong",
        "Ruang Rawat Inap"
    };

    std::cout << "\n===========================================\n";
    std::cout << "          Laporan Kebersihan Rumah Sakit\n";
    std::cout << "===========================================\n";
    std::cout << "Nama Pelapor       : " << namaPelapor << "\n";
    std::cout << "Ruangan/Fasilitas  : " << ruangan[pilihanRuangan - 1] << "\n";
    std::cout << "Keterangan         : " << keterangan << "\n";
    std::cout << "===========================================\n";
    std::cout << "Terima kasih atas laporan Anda!\n";

    return 0;
}
