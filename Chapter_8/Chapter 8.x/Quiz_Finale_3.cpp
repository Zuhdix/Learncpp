#include "Random.h"
#include <iostream>

void playGame()
{
	std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

	constexpr int maxGuesses{ 7 };
	constexpr int minVal{ 1 };
	constexpr int maxVal{ 100 };

	int hiLo{ Random::get(minVal, maxVal) };

	for (int i{ 1 }; i <= maxGuesses; ++i)
	{
		std::cout << "Guess #" << i << ": ";

		int getInput{};
		std::cin >> getInput;

		if (getInput > hiLo)
		{
			std::cout << "Your guess is too high.\n";
		}
		else if (getInput < hiLo)
		{
			std::cout << "Your guess is too low.\n";
		}
		else
		{
			std::cout << "Correct! You win! \n";
			return;
		}
	}

	std::cout << "Sorry buddy, you lose the correct number is " << hiLo << '\n';
}

int main()
{
	char c{};

	while (true)
	{
		playGame();

		while (true)
		{
			std::cout << "Would you like to play again (y/n)?";
			std::cin >> c;

			if (c == 'y' || c == 'n')
			{
				break;
			}
		}
		if (c == 'n')
		{
			break;
		}
	}
	std::cout << "Thanks for playing";

	return 0;
}