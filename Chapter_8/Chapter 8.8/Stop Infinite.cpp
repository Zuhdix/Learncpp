#include <iostream>
// variable loop wajib signed
//int main()
//{
//	while (true)
//	{
//		std::cout << "Loop again (y/n)? ";
//		char c{};
//		std::cin >> c;
//
//		if (c == 'n')
//			return 0;
//	}
//
//	return 0;
//}

/* Program Rusak karena semicolon

int main()
{
	int count{ 1 };
	while (count <= 10); // note the semicolon here
	{
		std::cout << count << ' ';
		++count;
	}

	std::cout << "done!\n";

	return 0;
}

// seakan menulis seperti ini

int main()
{
	int count{ 1 };
	while (count <= 10) // this is an infinite loop
		;               // whose body is a null statement

	{ // this is no longer associated with the while loop
		std::cout << count << ' ';
		++count;
	}

	std::cout << "done!\n";

	return 0;
}




*/