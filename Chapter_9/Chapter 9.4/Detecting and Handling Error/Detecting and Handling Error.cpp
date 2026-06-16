#include <iostream>


// Silent failure if y=0
void printIntDivision(int x, int y)
{
	if (y != 0)
		std::cout << x / y;
}

//void printIntDivision(int x, int y)
//{
//	if (y != 0)
//		std::cout << x / y;
//	else
//		std::cout << "Error: Could not divide by zero\n";
//}

// Passing errors back to the caller

/*int doIntDivision(int x, int y)
{
	return x / y;
}
*/

/* daripada pake ini
* 
void printIntDivision(int x, int y)
{
	if (y != 0)
		std::cout << x / y;
	else
		std::cout << "Error: Could not divide by zero\n";
}
*/

/* mending ini aja

bool printIntDivision(int x, int y)
{
	if (y == 0)
	{
		std::cout << "Error: could not divide by zero\n";
		return false;
	}

	std::cout << x / y;

	return true;
}
*/

int main()
{
	printIntDivision(1, 2);

	return 0;
}

