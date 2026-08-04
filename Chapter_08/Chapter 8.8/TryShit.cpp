#include <iostream>

int main()
{
	constexpr int ukuran{ 5 };

	int y{ 1 };
	while (y <= ukuran) // 1 <= 5
	{
		int x{ 1 };

		while (x <= ukuran)
		{
			if (x + y == ukuran + 1 || x == y )
			{
				std::cout << "# "; // looping ketiga nilai y 3.
			}
			else
			{
				std::cout << ". ";
			}
			
			++x;
		}
		std::cout << '\n';
		++y;
	}



	return 0;
}