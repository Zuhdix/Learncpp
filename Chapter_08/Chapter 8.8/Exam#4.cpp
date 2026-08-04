//#include <iostream>
//
//int main()
//{
//	int outer{ 1 };
//
//	while (outer <= 5)		// true 1 <= 5
//	{
//		int counter{ 5 };
//
//		int inner{ outer };	// inner = 1 
//		while (counter > 0) 
//		{
//			if (inner < counter)  // inner < 5
//			{
//				std::cout << " "; // true
//			}
//			else
//			{
//				std::cout << inner << " ";
//				--inner;
//			}
//			--counter;
//		}
//
//		std::cout << '\n';
//		++outer;
//	}
//
//
//	return 0;
//}