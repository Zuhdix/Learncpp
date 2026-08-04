#include <iostream>

namespace Constant{
	constexpr double gravity{ 9.8 };
}

// dapatkan tinggi tower dari user dan return
double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

// Return posisi ketinggian bola sekarang setelah "seconds" 
double calculateBallHeight(double towerHeight, int seconds)
{
	
	// formula s = (u * t) + (a * t^2) / 2
	// ini u (initial velocity) = 0, so (u * t) = 0
	const double fallDistance{ Constant::gravity * (seconds * seconds) / 2.0 };
	const double ballHeight{ towerHeight - fallDistance };

	// Jika bola dibawah tanah, on the ground
	if (ballHeight < 0.0)
		return 0.0;

	return ballHeight;
}

// print bola diatas tanah
void printBallHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else
	{
		std::cout << "At " << seconds << " seconds, the ball is on the ground. \n";
	}
}

// menghitung bola saat ini dan print
// fungsi pembantu membuatnya jadi mudah dibaca
double calculateAndPrintBallHeight(double towerHeight, int seconds)
{
	const double ballHeight{ calculateBallHeight(towerHeight, seconds) };
	printBallHeight(ballHeight, seconds);

	//if (ballHeight < 0.0) // redundan karena sudah di evaluasi di calculateBallHeight;
	//	return 0.0;

	return ballHeight;
}


int main()
{
	// waktu mulai dari nol
	int seconds{0};
	const double towerHeight{ getTowerHeight() };


	while (true) {
	
		if (calculateAndPrintBallHeight(towerHeight, seconds) == 0.0)
			break;

		++seconds;
	}

	// versi mamang Alex

	//while (calculateAndPrintBallHeight(towerHeight, seconds) > 0.0)
	//{
	//	++seconds;
	//}


	std::cout << "Keluar dari loop\n";

	return 0;
}