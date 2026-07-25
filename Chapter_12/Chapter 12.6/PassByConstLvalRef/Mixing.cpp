#include <string>

void foo(int a, int& b, const std::string& c)
{

}

int main()
{
	int x{ 5 };
	const std::string s{ "hello, world!" };

	foo(5, x, s);
	// (pass by value, pass by-ref, pass by-cons-ref)

	return 0;
}