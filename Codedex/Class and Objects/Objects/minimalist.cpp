#include <iostream>
#include <string>

/**
 * @brief Kelas yang merepresentasikan data mahasiswa.
 *
 * Kelas ini menyimpan informasi dasar tentang seorang mahasiswa, termasuk nama,
 * angkatan/tahun masuk, IPK (GPA), dan status enrollment.
 * 
 * Catatan: Semua anggota data bersifat public untuk kesederhanaan contoh.
 * Dalam aplikasi nyata, gunakan encapsulation dengan getter/setter dan constructor.
 */
class Student {
public:
    std::string name{};   ///< Nama lengkap mahasiswa (default: string kosong)
    int year{};           ///< Tahun masuk atau angkatan mahasiswa (default: 0)
    double gpa{};         ///< Indeks Prestasi Kumulatif (IPK/GPA) mahasiswa (default: 0.0)
    bool enrolled{};      ///< Status enrollment mahasiswa (true jika aktif, false jika tidak) (default: false)
};

/**
 * @brief Fungsi utama program.
 *
 * Program ini mendemonstrasikan pembuatan objek Student, inisialisasi data,
 * dan pencetakan informasi mahasiswa ke layar menggunakan std::cout.
 *
 * @return 0 jika program berjalan sukses, nilai lain jika ada error (tidak ditangani di contoh ini).
 */
int main()
{
    // Membuat objek Student bernama Aqiel
    Student Aqiel;
    
    // Inisialisasi data mahasiswa
    Aqiel.name = "Aqiel";          // Set nama menjadi "Aqiel"
    Aqiel.year = 22;               // Set tahun masuk menjadi 2022 (asumsi format YY)
    Aqiel.gpa = 3.82;              // Set IPK menjadi 3.82
    Aqiel.enrolled = true;         // Set status enrolled menjadi aktif
    
    // Mencetak informasi mahasiswa ke console
    std::cout << "Name: " << Aqiel.name << '\n';
    std::cout << "Year: " << Aqiel.year << '\n';
    std::cout << "GPA: " << Aqiel.gpa << '\n';
    std::cout << "Enrolled: " << Aqiel.enrolled << '\n';
    
    return 0;  // Program selesai dengan sukses
}
