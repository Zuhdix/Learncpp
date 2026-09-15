#include <cassert>
#include <iostream>
#include <vector>

namespace Animals
{
	enum Names
	{
		chicken,
		dog,
		cat,
		elephant,
		duck,
		snake,
		max_animals,
	};
}

int main()
{
	std::vector legs{ 2,4 ,4 ,4 ,2, 0};

	assert(std::size(legs) == Animals::Names::max_animals);

	std::cout << "The elephant has " << legs[Animals::elephant] << " legs";


	return 0;
}