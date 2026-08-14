#include <iostream>
#include <string>
#include <string_view>

class Ball
{
private:
	std::string m_name{ "black" };
	double m_radius{ 10.0 };

public:

	Ball(std::string_view name = "black", double radius = 10.0)
		:m_name{ name }, m_radius{ radius }
	{
		std::cout << "Ball (" << m_name << ", " << m_radius << ")\n";
	}

	Ball(double radius)
		// : Ball{m_name="black",radius} // ini meledak gak tau kenapa
		// : Ball{name, radius} // jelas error, name gak di ketahui
		// : Ball{ radius } delegasi diri sendiri jadi gak bisa
		// udah gw taruh di atas juga sama
		: Ball{"black", radius} // ajg malah bener, ngetik ngasal padahal
	{ }


};

int main()
{
	Ball def{};
	Ball blue{ "blue" };
	Ball twenty{ 20.0 };
	Ball blueTwenty{ "blue", 20.0 };

	return 0;
}