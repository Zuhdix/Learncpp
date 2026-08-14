#include <iostream>

class IntPair
{
private:
	int m_x{};
	int m_y{};

public:
	IntPair(int x, int y)
		: m_x{ x }, m_y{ y }
	{}

	int x() const { return m_x; }
	int y() const { return m_y; }
};

void print(IntPair p)
{
	std::cout << "(" << p.x() << ", " << p.y() << ")\n";
}

int main()
{
	// Case 1: Pass variable
	IntPair p{ 3,4 };
	print(p); // prints (3,4)

	// Case 2: Construct temporary IntPair and pass to function
	print(IntPair{ 5,6 });

	// Case 3: Implicitly convert {7,8} to a temporary IntPair and pass to function
	print({ 7,8 });

	return 0;
}

// Summarize and other example
IntPair p{ 1, 2 }; // create named object p initialized with { 1, 2 }
IntPair{ 1, 2 };   // create temporary object initialized with { 1, 2 }
{ 1, 2 };           // compiler will try to convert { 1, 2 } to temporary object matching expected type (typically a parameter or return type)

std::string{ "Hello" }; // create a temporary std::string initialized with "Hello"
std::string{};          // create a temporary std::string using value initialization / default constructor