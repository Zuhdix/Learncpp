#include <iostream>

struct IntPair
{
	int x{};
	int y{};

	void print() const // alasannya karena fungsi yang tidak memodifikasi apapun wajib const (karena bisa di pake di const/non-const juga jadi ya sekalian const)
	{
		std::cout << "Pair(" << x << ", " << y << ")\n";
	}

	bool isEqual(const IntPair& b) const
	{
		return x == b.x && y == b.y;
	}
};

/*  no 2 */
void checkDate(const Date& d) // d di pass by const ref, jadi gak bisa call member function non-const pada objek const
{
	d.print();
}