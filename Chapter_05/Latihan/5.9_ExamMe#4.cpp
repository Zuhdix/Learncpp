#include <iostream>
#include <string> // WAJIB: Agar std::string dan std::getline dikenali compiler lain

int main()
{
    // Orang 1
    std::cout << "Enter the name of person #1: ";
    std::string name1{};
    // Menggunakan std::ws untuk membersihkan buffer, dan getline untuk spasi
    std::getline(std::cin >> std::ws, name1); 

    std::cout << "Enter the age of " << name1 << ": ";
    int age1{};
    std::cin >> age1;

    // Orang 2
    std::cout << "Enter the name of person #2: ";
    std::string name2{};
    // std::ws di sini SANGAT PENTING karena 'cin >> age1' meninggalkan '\n'
    std::getline(std::cin >> std::ws, name2);

    std::cout << "Enter the age of " << name2 << ": ";
    int age2{};
    std::cin >> age2;

    // Logika Perbandingan
    if (age1 > age2) {
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ").\n";
    } 
    else if (age2 > age1) { // Cek eksplisit jika age2 lebih besar
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ").\n";
    } 
    else { // Sisa kemungkinan: Umurnya sama
        std::cout << name1 << " and " << name2 << " are the same age.\n";
    }

    return 0;
}
