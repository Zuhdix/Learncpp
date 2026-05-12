#include "Random.h"
#include <iostream>

bool guessGame(int min, int max, int maxGuessess)
{
	std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << maxGuessess << " tries to geuss what it is.\n";
	int hiLo{ Random::get(min, max) };

	for (int count{ 1 }; count <= maxGuessess; ++count)
	{
		std::cout << "Guess #" << count << ": ";

		int getInput{};
		std::cin >> getInput;

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
			return true;
		}
	}

	std::cout << "Sorry buddy, you lose the correct number is " << hiLo << '\n';
	return false;
}

bool playAgain()
{	
	while (true) {
		std::cout << "Would you like to play again(y/n)?";
		char ch{};
		std::cin >> ch;

		switch (ch)
		{
		case 'y':
			return true;
		case 'n':
			return false;
		}
	}
}

int main()
{
	constexpr int minVal{ 1 };
	constexpr int maxVal{ 100 };
	constexpr int guessThresshold{ 7 };

	do {
		guessGame(minVal, maxVal, guessThresshold);
	} while (playAgain());

	std::cout << "Thanks for playing.";

	return 0;
}
