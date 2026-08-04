#include <iostream>

struct Foo
{
	int a{};
	int b{};
	int c{};
	// tambahakan anggota baru di bagian bawah untuk menghindari error pada designated initializer syntax
};

std::ostream& operator<< (std::ostream& os, const Foo& f)
{ 
	os << f.a << ' ' << f.b << ' ' << f.c;
	return os;
}

int main()
{
	Foo foo{ 1, 2, 3 }; // aggregate initialization

	Foo x = foo; // copy initialization
	Foo y(foo); // direct initialization
	Foo z{ foo }; // direct list initialization

	std::cout << "foo: " << foo << '\n';
	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';
	std::cout << "z: " << z << '\n';
}