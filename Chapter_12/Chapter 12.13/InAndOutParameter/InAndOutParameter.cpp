#include <iostream>

void print(int x) // x is an in paramateter
{
	std::cout << x << '\n';
}

void print(const std::string& s) // s is an in param
{
	std::cout << s << '\n';
}

int main()
{
	print(5);
	std::string s{ "Hello, World!" };
	print(s);


	return 0;
}

// another example 
void foo1(int x);  // pass by value
void foo2(int& x); // pass by reference
void foo3(int* x); // pass by address

int main()
{
    int i{};

    foo1(i);  // can't modify i
    foo2(i);  // can modify i (not obvious)
    foo3(&i); // can modify i

    int* ptr{ &i };
    foo3(ptr); // can modify i (not obvious)

    return 0;
}