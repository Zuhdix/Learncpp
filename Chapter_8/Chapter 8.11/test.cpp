#include <iostream>

int main()
{
	int count{ 0 };
	//bool keepLooping{ true };
	while (true)
	{
		std::cout << "e untuk keluar: ";

		char ch{};
		std::cin >> ch;

		if (ch == 'e')
			false;
		else
		{
			++count;
			std::cout << "Iterasi ke- " << count << " kali\n";
		}
	}

	return 0;
}