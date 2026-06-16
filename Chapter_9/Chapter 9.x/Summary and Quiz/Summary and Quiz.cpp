#include "Random.h"
#include <iostream>
#include <limits>

// Membersihkan sisa sampah di input buffer (Extraneous Input). 
// [Baca detail: Chapter 9.5]
void ignoreLine()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// "The Bouncer": Mengurus semua validasi input dan menendang input ngawur.
int getGuess(int min, int max)
{
	while (true) // Penjara validasi
	{
		int input{};
		std::cin >> input;

		// 1. Deteksi "Failure Mode" (User masukin huruf/simbol)
		if (!std::cin)
		{
			std::cin.clear(); // Sembuhkan std::cin
			ignoreLine();     // Buang karakter perusaknya
			std::cout << "Harus integer blok: ";
			continue;         // Lempar balik ke atas (minta input lagi)
		}

		// 2. Buang Extraneous Input (Misal user ngetik "45x", buang 'x'-nya)
		ignoreLine();

		// 3. Deteksi Out of Bounds (Angka di luar batas)
		if (input < min || input > max)
		{
			std::cout << "Out of bound: ";
			continue;         // Lempar balik ke atas
		}

		// Kalau selamat dari semua jebakan di atas, kembalikan angka bersihnya
		return input;
	}
}

// Mengurus logika murni gameplay untuk 1 ronde.
bool guessGame(int min, int max, int maxGuessess)
{
	std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << maxGuessess << " tries to geuss what it is.\n";
	int hiLo{ Random::get(min, max) };

	for (int count{ 1 }; count <= maxGuessess; ++count)
	{
		std::cout << "Guess #" << count << ": ";

		// Panggil si Tukang Pukul buat ngambil input bersih
		int getInput{ getGuess(min, max) };

		if (getInput > hiLo)
		{
			std::cout << "Your guess to high.\n";
		}
		else if (getInput < hiLo)
		{
			std::cout << "Your guess to low.\n";
		}
		else
		{
			std::cout << "Correct! You win! \n";
			return true; // Early exit (keluar paksa dari loop dan fungsi karena menang)
		}
	}

	// Kalau loop habis berputar 7x dan gak pernah kena 'return true', berarti kalah.
	std::cout << "Sorry buddy, you lose the correct number is " << hiLo << '\n';
	return false;
}

// Penjara validasi untuk opsi main lagi.
bool playAgain()
{
	while (true) {
		std::cout << "Would you like to play again(y/n)?";
		char ch{};
		std::cin >> ch;

		ignoreLine(); // Mencegah user ngetik "yes" jadi error (cukup ambil 'y', sisa dibuang)

		switch (ch)
		{
		case 'y':
			return true;
		case 'n':
			return false;
		}
	}
}

// Titik kumpul utama (Separation of Concerns).
int main()
{
	// Setup magic numbers pakai constexpr (Best Practice)
	constexpr int minVal{ 1 };
	constexpr int maxVal{ 100 };
	constexpr int guessThresshold{ 7 };

	// Pakai do-while karena game WAJIB dimainkan minimal 1 kali sebelum nanya 'playAgain'
	do {
		guessGame(minVal, maxVal, guessThresshold);
	} while (playAgain());

	std::cout << "Thanks for playing.";

	return 0;
}