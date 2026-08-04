#include <iostream>
#include <optional>
#include <string>
#include <string_view>
#include <limits>

enum Direction { north, south, east, west };

constexpr std::string_view getDirectionName(Direction d)
{
	switch (d)
	{
	case north:	return "north";
	case south:	return "south";
	case east:	return "east";
	case west:	return "west";
	default:	return "????";
	}
}

constexpr std::optional<Direction> getDirectionFromString(std::string_view sv)
{
	if (sv == "north")	return north;
	if (sv == "south")	return south;
	if (sv == "east")	return east;
	if (sv == "west")	return west;

	return {};
}

// operator<<
std::ostream& operator<<(std::ostream& out, Direction d)
{
	out << getDirectionName(d);
	return out;
}

// operator>>
std::istream& operator>>(std::istream& in, Direction& d)
{
	std::string s{};
	in >> s;

	std::optional<Direction> match{ getDirectionFromString(s) };
	if (match) // cek apakah match nya ada
	{
		d = *match; 
		return in;
	}
	// jika inputan gak valid maka gagal
	in.setstate(std::ios_base::failbit);
	return in;
}

int main()
{
	std::cout << "Enter a direction(north, south, east or west): ";

	Direction d{};
	std::cin >> d;

	if (std::cin)
		std::cout << "You entered: " << d << '\n';
	else
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid direction\n";
	}

	return 0;
}