struct Something
{
	int x; // no initialization value (bad)
	int y{}; // value-initialized to 0 (good)
	int z{ 2 }; // explicitly initialized to 2 (good)
};

int main()
{
	Something s1;	// No initializer list: s1.x is unitialied, s1.y and s1. use defaults

	Something s2{ 2, 3, 4 }; // use explicit initializers for s2.x, s2.y, and s2.z (no default values are used)
	
	Something s3{}; // missing initializer list: s3.x is value -initialized to 0, s3.y is value-initialized to 0, s3.z is explicitly initialized to 2

	return 0;
}