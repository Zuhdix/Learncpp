#include <iostream>
#include <cmath>

using namespace std;

int main() {

	cout << "masukkan jari jari lingkaran: ";
	double pi{ 3.14 };
  
	double r1{};
	cin >> r1; // fix radius, agar lebih mudah dibaca liat bawah
  
	double r2{ pow(r1,2) }; //fix luas

	double Lingkaran = pi * r2 ; // valid secara logika, tapi variabel ambigu
	cout << "luas lingkarannya: " << Lingkaran;

	return 0;
}

//GPT

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Tampilkan instruksi ke user
    cout << "Masukkan jari-jari lingkaran: ";

    // Deklarasi konstanta pi dan variabel radius
    const double pi = 3.14;
    double radius{};
    cin >> radius;

    // Validasi agar jari-jari tidak negatif
    if (radius < 0) {
        cout << "Jari-jari tidak boleh negatif." << endl;
        return 1; // Menghentikan program jika input tidak valid
    }

    // Hitung luas lingkaran
    double luas = pi * pow(radius, 2);

    // Tampilkan hasil
    cout << "Luas lingkarannya: " << luas << endl;

    return 0;
}
