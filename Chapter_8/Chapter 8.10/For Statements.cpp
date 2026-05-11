//#include <iostream>
//
//int main()
//{
//	for (int i{ 1 }; i <= 10; ++i)
//		std::cout << i << ' ';
//
//	std::cout << '\n';
//
//	return 0;
//}
//
//		// versi minus
///*
//
//#include <iostream>
//
//int main()
//{
//	for (int i{ 9 }; i >= 0; --i)
//		std::cout << i << ' ';
//
//	std::cout << '\n';
//
//	return 0;
//}
//
//		// versi custom
//
//#include <iostream>
//
//int main()
//{
//	for (int i{ 0 }; i <= 10; i += 2) // increment by 2 each iteration
//		std::cout << i << ' ';
//
//	std::cout << '\n';
//
//	return 0;
//}
//
//*/

// prefer variable inside loop
/*
	#include <iostream>

    int main()
    {
    int i {}; // i defined outside loop
    for (i = 0; i < 10; ++i) // i assigned value
    {
        std::cout << i << ' ';
    }

    // i can still be accessed here

    std::cout << '\n';

    return 0;
    }


*/