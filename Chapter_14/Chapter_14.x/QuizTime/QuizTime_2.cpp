#include <iostream>

class Fraction
{
private:
	int m_numerator{ 0 };
	int m_denominator{ 1 };

public:
	Fraction() = default;

	explicit Fraction(int num, int den)
		: m_numerator{num}, m_denominator{den}
	{ }

	void getFraction()
	{
		std::cout << "Enter numerator: ";
		std::cin >> m_numerator;
		std::cout << "Enter denominator: ";
		std::cin >> m_denominator;
	}

	Fraction multiply(const Fraction& other) const
	{
		return Fraction { m_numerator * other.m_numerator, m_denominator * other.m_denominator };
	}

	void printFraction() const
	{
		std::cout << m_numerator << '/' << m_denominator << '\n';
	}
};

int main()
{
	Fraction f1{};
	f1.getFraction();   // baca input ke f1

	Fraction f2{};
	f2.getFraction();   // baca input ke f2

	std::cout << "Your fractions multiplied together: ";
	f1.multiply(f2).printFraction(); // multiply return Fraction → langsung print

	return 0;
}