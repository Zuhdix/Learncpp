//#include <iostream>
//
//int breakOrReturn()
//{
//	while (true) // infinite loop
//	{
//		std::cout << "Enter 'b' to break or 'r' to return: ";
//		char ch{};
//		std::cin >> ch;
//
//		if (ch == 'b')
//			break; // akan keluar loop
//
//		if (ch == 'r')
//			return 1; // langsung return ke fungsi caller (dalam hal ini main())
//	}
//	// jika break, ini yang akan di eksekusi.
//	std::cout << "We broke out of the loop\n";
//
//	return 0;
//}
//
//int main()
//{
//	int returnValue{ breakOrReturn()};
//	std::cout << "Function breakOrReturn returned " << returnValue << '\n';
//
//	return 0;
//}