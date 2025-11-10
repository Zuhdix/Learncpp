// Menyertakan library 'iostream' agar kita bisa menggunakan std::cout (output)
// dan std::cin (input).
#include <iostream>

// Menyertakan library 'string' agar kita bisa menggunakan std::string,
// std::getline, dan std::ssize.
#include <string>

// Fungsi utama, titik awal di mana eksekusi program dimulai.
int main()
{
    // 1. Mencetak prompt (perintah) ke layar untuk meminta nama.
    std::cout << " Enter your fullname: ";

    // 2. Deklarasi variabel 'name' dengan tipe std::string.
    //    Menggunakan {} (list initialization) untuk inisialisasi default (kosong).
    std::string name{};

    // 3. Mengambil input. Ini adalah bagian yang paling cerdas:
    //    a. (std::cin >> std::ws): Ini dieksekusi LEBIH DULU.
    //       std::ws "memakan" semua whitespace (spasi, tab, newline)
    //       yang mungkin tersisa di buffer input.
    //    b. std::getline(...): Setelah buffer bersih, getline mengambil
    //       seluruh baris teks (termasuk spasi) dan menyimpannya ke 'name'.
    std::getline(std::cin >> std::ws, name);

    // 4. Mencetak prompt ke layar untuk meminta umur.
    std::cout << "Enter your age: ";

    // 5. Deklarasi variabel 'age' dengan tipe int (integer/bilangan bulat).
    int age{};

    // 6. Mengambil input angka dari user dan menyimpannya ke 'age'.
    //    Catatan: Ini akan meninggalkan karakter '\n' (newline) di buffer,
    //    tapi jika kita meminta input nama *sebelumnya*, ini tidak jadi masalah.
    std::cin >> age;

    // 7. Menghitung panjang nama. Ini adalah cara C++20 yang modern:
    //    a. std::ssize(name): Fungsi C++20 yang mengembalikan panjang
    //       string sebagai TIPE SIGNED (ber-tanda, bisa negatif).
    //       Ini lebih aman daripada .length() yang unsigned.
    //    b. static_cast<int>(...): Mengkonversi hasil 'ssize' (yang mungkin
    //       long) menjadi 'int' agar sesuai dengan tipe 'age'.
    int len{ static_cast<int>(std::ssize(name)) };

    // 8. Mencetak hasil akhir.
    //    Penjumlahan 'age + len' aman karena keduanya bertipe 'int' (signed).
    std::cout << "Your age +  length of name: " << age + len;


    // 9. Mengembalikan 0, menandakan program selesai dengan sukses.
    return 0;
}
