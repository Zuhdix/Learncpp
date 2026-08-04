#include <iostream>

int main()
{
	enum class Color // "enum class" defines this as a scoped enumeration rather than an unscoped enum
	{
		red,	// red part of Color's scope region
		blue,
	};

	enum class Fruit
	{
		banana, // banana di region Fruit
		apple,
	};

	Color color{ Color::red }; // note: red is not directly accessible, we have to use Color::red
	Fruit fruit{ Fruit::banana }; // sama


	if (color == fruit) // compile error: the compiler doesn't know how to compare different types Color and Fruit
		std::cout << "color and fruit are equal\n";
	else
		std::cout << "color and fruit aren't equal\n";

	return 0;
}

// cara akses kaya namespace dan enumerator di scopednya sendiri
#include <iostream>

int main()
{
	enum class Color // "enum class" defines this as a scoped enum rather than an unscoped enum
	{
		red, // red is considered part of Color's scope region
		blue,
	};

	std::cout << red << '\n';        // compile error: red not defined in this scope region
	std::cout << Color::red << '\n'; // compile error: std::cout doesn't know how to print this (will not implicitly convert to int)

	Color color{ Color::blue }; // okay

	return 0;
}