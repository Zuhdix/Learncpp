//int main()
//{
//    char x{}; // assume this is assigned memory address 140
//    char& ref{ x }; // ref is an lvalue reference to x (when used with a type, & means lvalue reference)
//
//    return 0;
//}

#include <iostream>

//int main()
//{
//	int x{ 5 };
//	std::cout << x << '\n'; // print value of variable x
//	std::cout << &x << '\n'; // print memory address of variable x
//
//	std::cout << *(&x) << '\n'; // print the value at the memory address of variable x (gak perlu kuruang, tapi biar mudah dibaca)
//
//	return 0;
//}

int main()
{
	int x{ 5 };		// normal variable
	int& ref{ x }; // reference to an integer (bound to x)

	int* ptr;		// a pointer to an integer

	return 0;
}

/*
int* ptr1, ptr2;   // incorrect: ptr1 is a pointer to an int, but ptr2 is just a plain int!
int* ptr3, * ptr4; // correct: ptr3 and ptr4 are both pointers to an int 
*/