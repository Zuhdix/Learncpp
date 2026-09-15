#include <iostream>
#include <vector>

void printCapLen(const std::vector<int>& v)
{
	std::cout << "Capacity: " << v.capacity() << " Length: " << v.size() << '\n';
}

int main()
{
	std::vector v{ 0,1,2 }; // create vector with 3 elements
	printCapLen(v);

	for (auto i : v)
		std::cout << i << ' ';

	v.resize(5);
	std::cout << "The length is: " << v.size() << '\n';

	printCapLen(v);

	for (auto i : v)
		std::cout << i << ' ';

	std::cout << '\n';

	return 0;
}