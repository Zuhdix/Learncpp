#include <iostream>
#include <string_view>

constexpr std::string_view getQuantityPhrase(const int apple)
{
	if (apple < 0)
		return "negative";
	else if (apple == 0)
		return "no";
	else if (apple == 1)
		return "a single";
	else if (apple == 2)
		return "a couple of";
	else if (apple == 3)
		return "a few";
	else
	{
		return "many";
	}


}
	
std::string_view getApplesPluralized(int apple)
{
	if (apple == 1)
		return "apple";
	else
	{
		return "apples";
	}

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
