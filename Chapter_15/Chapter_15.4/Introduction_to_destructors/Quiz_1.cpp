#include <cstdlib>
#include <iostream>

class Logger
{
public:
	Logger() { std::cout << "Logger opened\n"; }
	~Logger() { std::cout << "Logger closed\n"; }
};

int main()
{
	Logger log{};
	std::cout << "Program running\n";
	std::exit(0);
}