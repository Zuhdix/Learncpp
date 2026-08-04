#include <iostream>

struct Fraction
{
	int numerator{};
	int denominator{};
};

std::ostream& operator<<(std::ostream& os, const Fraction& f)
{
	os << f.numerator << '/' << f.denominator;
	return os;
}

Fraction getFraction()
{
	Fraction temp{};
	std::cout << "Enter a value for the numerator: ";
	std::cin >> temp.numerator;

	std::cout << "Enter a value for the denominator: ";
	std::cin >> temp.denominator;
	std::cout << '\n';

	return temp;
}

Fraction multiplyFraction(Fraction f1, Fraction f2)
{	
	f1.numerator = f1.numerator * f2.numerator ;
	f2.denominator = f1.denominator * f2.denominator;
	Fraction result{ f1.numerator, f2.denominator };
	// Mental model yang lebih clean — langsung hitung di aggregate init
	// Fraction resultClean{ f1.numerator * f2.numerator, f1.denominator * f2.denominator };
	return result;
}

void printResult(const Fraction& rs)
{
	std::cout << "Your fractions multiplied together: " << rs.numerator << '/' << rs.denominator;
	std::cout << '\n';

}

void printResult2(const Fraction& rs1,const Fraction& rs2)
{
	Fraction result{ multiplyFraction(rs1, rs2) };
	std::cout << "Your fractions multiplied together2: " << result;

}


int main()
{
	Fraction f1{ getFraction() };
	Fraction f2{ getFraction() };
	
	Fraction result{ multiplyFraction(f1,f2) };

	printResult(result);
	printResult2(f1, f2);
	return 0;
}	