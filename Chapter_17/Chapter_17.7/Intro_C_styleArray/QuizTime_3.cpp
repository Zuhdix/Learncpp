#include <iostream>


namespace PerfectSquare
{
	constexpr int arr[]{ 0,1,4,9 };

	void findPerfectSquare()
	{
		while (true)
		{
			std::cout << "Enter a single digit integer, or -1 to quit: ";

			int e{};
			std::cin >> e;

			if (e == -1)
			{
				std::cout << "Bye\n";
				break;
			}

			bool found{ false };
			for (auto element : arr)
			{
				if (e == element)
				{
					found = true;
					break;
				}
			}

			if (found)
			{
				std::cout << e << " is a perfect square\n\n";
			}
			else
			{
				std::cout << e << " is not a perfect square\n\n";
			}
		}
	}

}

int main()
{
	
	PerfectSquare::findPerfectSquare();

	return 0;
}