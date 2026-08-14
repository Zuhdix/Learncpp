#include <iostream>

struct Foo
{
	void printHi() { std::cout << "Hi!\n"; }
};

// better pake namespace jika gak punya data member
namespace Boo
{
	void printHi() { std::cout << "Hi!\n"; }
};

int main()
{
	Foo f{};
	f.printHi(); // requires object to call
	
	Boo::printHi(); // gak butuh objek
	return 0;
}