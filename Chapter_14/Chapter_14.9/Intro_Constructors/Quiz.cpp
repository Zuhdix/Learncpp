#include <iostream>

class Rectangle
{
	double m_width{};
	double m_height{};

public:
	Rectangle(double width, double height)
	{
		std::cout << "Foo(" << width << ", " << height << ") Rectangle created\n"; // tambahkan ini
	}

	double area() const { return m_width * m_height; }
};

int main()
{
	Rectangle r{ 5.0, 3.0 }; // parameter dibuat tapi gak dipake jadi compile error
	std::cout << r.area() << '\n'; // cetak 0 (default) karena blum di inisialisasi lewat constructor private membernya (14.10 blum nyampe)

	return 0;
}