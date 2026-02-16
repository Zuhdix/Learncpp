#include <iostream>
#include <string_view>

constexpr std::string_view getQuantityPhrase(const int apple)
{
	if (apple < 0)
		return "negative";
	if (apple == 0)
		return "no";
	if (apple == 1)
		return "a single";
	if (apple == 2)
		return "a couple of";
	if (apple == 3)
		return "a few";

	return "many";

}
	
std::string_view getApplesPluralized(int apple)
{
	return (apple == 1) ? "apple" : "apples";
}

int main()
{
	constexpr int maryApples{ 3 };
	std::cout << "Marry has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

	std::cout << "How many apples do you have? ";
	int numApples{};
	std::cin >> numApples;

	std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

	return 0;
}