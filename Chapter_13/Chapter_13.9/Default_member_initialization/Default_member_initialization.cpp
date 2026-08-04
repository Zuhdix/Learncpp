struct Something
{
	int x; // no initialization value (bad)
	int y{}; // value-initialized to 0 (good)
	int z{ 2 }; // explicitly initialized to 2 (good)
};

int main()
{
	Something s1; // x is uninitialized, y is 0, z is 2

	Something s2{ 2, 3, 4 }; // use explicit initializers for s2.x, s2.y, and s2.z (no default values are used)

	return 0;
}