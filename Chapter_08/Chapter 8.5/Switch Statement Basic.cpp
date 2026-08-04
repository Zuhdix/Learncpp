#include <iostream>


// kondisi di switch harus di evaluasi ke tipe integral dan enum (baca 4.1, 13.2 dan 13.6)
// case harus identik (tidak boleh sama)
void printDigitName(int x)
{
	switch (x)
	{
	case 1:
		std::cout << "One";
		return;
	case 2:
		std::cout << "Two";
		return;
	case 3: // sesuai dengan statment case
		std::cout << "Three"; // ini yang di eksekusi
		return; // return ke calller
	default: // jika tidak ada case yang ditemukan, eksekusi lompat kesini
		std::cout << "Unknown"; // ini yang akan di eksekusi
		return; // return to the caller.
	}
}

int main()
{
	printDigitName(3);
	std::cout << '\n';
	printDigitName(5); // ini lompat ke label default. default harus di akhir dan bersifat opsional (hanya 1 label default perSwitch)

	return 0;
}