//#include <iostream>
//
//void printMath(int x, int y, char ch)
//{
//    switch (ch)
//    {
//    case '+':
//        std::cout << x << " + " << y << " = " << x + y << '\n';
//        break; // don't fall-through to next case
//    case '-':
//        std::cout << x << " - " << y << " = " << x - y << '\n';
//        break; // don't fall-through to next case
//    case '*':
//        std::cout << x << " * " << y << " = " << x * y << '\n';
//        break; // don't fall-through to next case
//    case '/':
//        std::cout << x << " / " << y << " = " << x / y << '\n';
//        break;
//    }
//}
//
//int main()
//{
//    printMath(2, 3, '+');
//
//    return 0;
//}


//#include <iostream>
//
//int main()
//{
//	int sum{ 0 };
//	// mengijnkan user memasukkan sampai 10
//	for (int count{ 0 }; count < 10; ++count)
//	{
//		std::cout << "Enter a number to add, or 0 to exit: ";
//		int num{};
//		std::cin >> num;
//		// keluar loop jika 0
//		if (num == 0)
//			break;
//		// jika bukan nol tambahkan ke num
//		sum += num;
//	}
//
//	// akan di eksekusi setelah break
//	std::cout << "The sum of all the numbers you entered is: " << sum << '\n';
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	while (true) // infinite loop
//	{
//		std::cout << "Enter 0 to exit or any other integer to continue: ";
//		int num{};
//		std::cin >> num;
//
//		// exit loop if user enters 0
//		if (num == 0)
//			break;
//	}
//
//	std::cout << "We're out!\n";
//
//	return 0;
//}