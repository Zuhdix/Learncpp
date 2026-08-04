// Menambahkan pustaka iostream yang penting untuk operasi input (std::cin)
// dan output (std::cout).
#include <iostream>

// =================================================================================
// FUNGSI-FUNGSI PEMBANTU (HELPER FUNCTIONS)
// =ada
// Fungsi ini bertugas untuk meminta satu nilai desimal (double) dari pengguna.
// - Menampilkan pesan prompt ke layar.
// - Membaca input dari keyboard.
// - Mengembalikan nilai yang sudah dimasukkan.
// =================================================================================
double getDouble()
{
	// 1. Tampilkan pesan permintaan input kepada pengguna.
	std::cout << "Enter a double value: ";

	// 2. Deklarasikan variabel 'x' untuk menyimpan input. Inisialisasi dengan {}
	//    adalah praktik terbaik untuk mencegah nilai acak.
	double x{};

	// 3. Baca angka yang diketik pengguna dan simpan ke dalam variabel 'x'.
	std::cin >> x;

	// 4. Kembalikan nilai 'x' ke bagian program yang memanggil fungsi ini.
	return x;
}

// =================================================================================
// Fungsi ini bertugas untuk meminta satu karakter operator aritmatika dari pengguna.
// - Menampilkan pesan prompt ke layar.
// - Membaca input karakter dari keyboard.
// - Mengembalikan karakter yang sudah dimasukkan.
// =================================================================================
char getSymbol()
{
	// 1. Tampilkan pesan permintaan input kepada pengguna.
	std::cout << "Enter +, -, *, or /: ";

	// 2. Deklarasikan variabel 'symbol' untuk menyimpan input karakter.
	char symbol{};

	// 3. Baca karakter yang diketik pengguna dan simpan ke dalam variabel 'symbol'.
	std::cin >> symbol;

	// 4. Kembalikan karakter 'symbol' ke pemanggil.
	return symbol;
}

// =================================================================================
// Fungsi ini bertugas untuk mencetak hasil akhir kalkulasi dengan format yang rapi.
// Fungsi ini tidak mengembalikan nilai apa pun (void).
// Parameter:
//   - x: Angka pertama (operand kiri).
//   - op: Operator aritmatika yang digunakan.
//   - y: Angka kedua (operand kanan).
//   - result: Hasil dari kalkulasi.
// =================================================================================
void printResult(double x, char op, double y, double result)
{
	// Cetak semua informasi yang diterima ke layar dalam satu baris.
	// Contoh output: 5.5 * 2.0 is 11.0
	std::cout << x << ' ' << op << ' ' << y << " is " << result << '\n';
}

// =================================================================================
// FUNGSI UTAMA (MAIN FUNCTION)
// Program akan selalu dimulai dari sini.
// =================================================================================
int main()
{
	// --- TAHAP 1: MENGUMPULKAN INPUT ---
	// Panggil fungsi getDouble() untuk mendapatkan angka pertama dan simpan di 'x'.
	double x{ getDouble() };
	// Panggil lagi getDouble() untuk mendapatkan angka kedua dan simpan di 'y'.
	double y{ getDouble() };
	// Panggil getSymbol() untuk mendapatkan operator dan simpan di 'op'.
	char op{ getSymbol() };

	// Deklarasikan variabel untuk menyimpan hasil perhitungan.
	double result{};

	// --- TAHAP 2: PROSES & KALKULASI ---
	// Gunakan struktur if-else if untuk menentukan operasi mana yang akan dilakukan
	// berdasarkan karakter yang disimpan di variabel 'op'.
	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else // Jika 'op' tidak cocok dengan salah satu simbol di atas
	{
		// Beri tahu pengguna bahwa inputnya tidak valid.
		std::cout << "invalid operator! \n";
		// Keluar dari program dan kembalikan kode 1.
		// Dalam konvensi, mengembalikan nilai selain 0 dari main() menandakan
		// bahwa program berakhir karena sebuah error.
		return 1;
	}

	// --- TAHAP 3: MENAMPILKAN OUTPUT ---
	// Baris ini hanya akan dieksekusi jika operator yang dimasukkan valid
	// (karena jika tidak valid, program sudah berhenti di 'return 1;').
	// Panggil fungsi printResult untuk menampilkan hasil akhir.
	printResult(x, op, y, result);

	// Kembalikan kode 0 untuk menandakan bahwa program berjalan dan berakhir
	// dengan sukses.
	return 0;
}
