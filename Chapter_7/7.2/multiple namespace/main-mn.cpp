#include "circle.h"
#include "growth.h"

#include <iostream>

int main()
{
	// dianggap satu namespace yang sama walau beda tempat.
	std::cout << BasicMath::pi << '\n';
	std::cout << BasicMath::e << '\n';

	return 0;
}