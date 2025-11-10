#include <iostream>
using namespace std;

//Mengubah fahreinheit ke Celsius dengan memasukkan angka dari user
int main() {

	double fahrenheit{};
	cout << " Masukkan suhu fahrenheit: ";
	cin >> fahrenheit;

	double celsius{ (fahrenheit - 32) * 5 / 9 }; // rumus fahreinheit umum
	cout << " Suhu dalam Celsius: " << celsius << '\n';

	return 0;
}
