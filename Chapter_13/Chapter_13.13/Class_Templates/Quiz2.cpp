#include <iostream>

template<typename T>
struct Triad
{
	T first{};
	T second{};
	T third{};
};

template<typename T>
void max(Triad<T> tr)
{
	std::cout << ((tr.first > tr.second) ? ((tr.first > tr.third) ? tr.first : tr.third) : ((tr.second > tr.third) ? tr.second : tr.third));
}

int main()
{
	Triad<int> tr1{ 9, 4, 2 };
	max(tr1);
	std::cout << '\n';
	Triad<double> tr2{ 4.9, 2.5, 8.1 };
	max(tr2);

	return 0;
}