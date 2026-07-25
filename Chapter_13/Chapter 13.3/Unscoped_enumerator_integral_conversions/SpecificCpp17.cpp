enum Pet : int // we've specified a base
{
	cat, // 0
	dog,
	pig,
	whale,
};

int main()
{
	Pet pet1{ 2 }; // ok: bisa pake brace initialize unscoped enum specific base int (C++17)
	Pet pet2(2); // compile error: gak bisa direct initialize
	Pet pet3 = 2; // compile error: gak bisa copy initialize

	pet1 = 3; // compile error: gak bisa assign with integer

	return 0;
}