#include <iostream>

class Point3d
{
private:
	int m_x{};
	int m_y{};
	int m_z{};

public:
	void setValues(int x, int y, int z)
	{
		m_x = x; // gw kira perubahan ini hanya berlaku ke scope setValue, ternyata scopenya satu class
		m_y = y; // asumsi yang salah sampai mencobanya dan ternyata bener
		m_z = z;
	}

	void print() const
	{
		std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">";
	}

	bool isEqual(const Point3d& p) const // member variable yang sudah copy initialization dari setValue di evaluasi dengan objek ekplisit dari luar class.
	{
		return (m_x == p.m_x && m_y == p.m_y && m_z == p.m_z);
		// alex, lebih readable
		return (m_x == p.m_x) && (m_y == p.m_y) && (m_z == p.m_z);
	}
};

int main()
{
	Point3d point1{};
	point1.setValues(1, 2, 3);

	Point3d point2{};
	point2.setValues(1, 2, 3);
	
	std::cout << "point 1 and point 2 are" << (point1.isEqual(point2) ? "" : " not") << " equal\n";

	Point3d point3{};
	point3.setValues(2, 9, 1);

	std::cout << "point 1 and point 3 are" << (point1.isEqual(point3) ? "" : " not") << " equal\n";

	return 0;
}