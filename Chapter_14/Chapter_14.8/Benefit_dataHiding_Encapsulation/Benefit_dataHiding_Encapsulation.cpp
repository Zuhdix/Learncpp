#include <iostream>
#include <string_view>

int main()
{
	std::string_view sv{ "Hello" }; // gak perlu tau implementasi string_view dan length() yang penting cara gunainnya (itu tujuan encapsulation)
	std::cout << sv.length();

	return 0;
}