struct Fraction
{
	int numerator{}; // we should use {0}; here, but for the sake of example we'll use value initialization instead
	int denominator{ 1 };
};

int main()
{
	Fraction f1; // numerator is value-initialized to 0, denominator defaulted to 1

	Fraction f2{}; // f2.numerator is value-initialized to 0, f2.denominator defaulted to 1

	Fraction f3{ 3 }; // f3.numerator is explicitly initialized to 3, f3.denominator defaulted to 1

	Fraction f4{ 3, 4 }; // f4.numerator is explicitly initialized to 3, f4.denominator explicitly initialized to 4

	return 0;
}