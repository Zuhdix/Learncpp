struct Foo
{
	int a{};
	int b{};
	int c{};
	// tambahakan anggota baru di bagian bawah untuk menghindari error pada designated initializer syntax
};

int main()
{
	Foo f1{ .a{1 }, .b{ 2 }, .c{ 3 } }; // designated initializer syntax in C++20

	Foo f2{ .a{ 4 }, .c{ 5 } }; // designated initializer syntax in C++20, b will be default-initialized to 0
	
	Foo f3{ .b{ 6 } }; // designated initializer syntax in C++20, a and c will be default-initialized to 0

	Foo fail{ .b{ 7 }, .a{ 8 }, .c{ 9 } }; // error: initializer for member 'b' appears after initializer for member 'a'

	return 0;
}