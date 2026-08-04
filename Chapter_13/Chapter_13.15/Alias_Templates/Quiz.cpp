#include <iostream>
#include <string>

template <typename T, typename U>
struct Map 
{ 
	T key{};
	U value{};
};

template <typename T>
using IntMap = Map<int, T>;


template<typename T>
void printIM(const IntMap<T>& i)
{
	std::cout << i.key << ' ' << i.value << '\n';
}

int main()
{
	IntMap im{ 1, "hello" };

	printIM(im);

	return 0;
}