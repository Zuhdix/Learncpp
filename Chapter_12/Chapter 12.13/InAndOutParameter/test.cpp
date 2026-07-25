#include <iostream>

void divideByTwo(int num, int div)
{
	//int result{num / div};
	//std::cout << result;

	std::cout << num / div << '\n';
	
}

int main()
{
	int firstNum{10};
	int dividedBy{2};
	divideByTwo(firstNum,dividedBy);

	return 0;
}