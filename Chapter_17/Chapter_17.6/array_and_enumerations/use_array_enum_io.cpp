#include <array>
#include <iostream>
#include <string>
#include <string_view>

namespace Color
{
	enum Type
	{
		black,
		red,
		blue,
		max_colors
	};

	// pake sv biar array bisa pake string_view
	using namespace std::string_view_literals; // for sv suffix
	constexpr std::array colorName{ "black"sv, "red"sv, "blue"sv };

	// pastikan definisikan string buat semua warna
	static_assert(std::size(colorName) == max_colors);
}

constexpr std::string_view getColorName(Color::Type color)
{
	// We can index the array using the enumerator to get the name of the enumerator
	return Color::colorName[static_cast<std::size_t>(color)];
}

// kasih tau operator<< cara print Color
// std::ostream adalah tipe dari std::cout
// return type dan param type adalah references (mencegah copy)
std::ostream& operator<<(std::ostream& out, Color::Type color)
{
	return out << getColorName(color);
}

// kasih tau operator>> cara nerima input Color
// pass pake non-const reference biar bisa modif
std::istream& operator>>(std::istream& in, Color::Type& color)
{
	std::string input{};
	std::getline(in >> std::ws, input);

	// iterasi seluruh list nama buat menemukan kecocokan
	for (std::size_t index = 0; index < Color::colorName.size(); ++index)
	{
		if (input == Color::colorName[index])
		{
			// jika ketemu sama, ambil enumerator berdasarkan indexnya
			color = static_cast<Color::Type>(index);
			return in;
		}
	}

	// klo gak nemu berarti invalid
	// set ke fail state
	in.setstate(std::ios_base::failbit);

	// On an extraction failur, operator>> zero-initializes fundamental types
	// Uncomment the following line to make this operatro do the same thing
	// color = {};
	return in;
}

int main()
{
	auto shirt{ Color::blue };
	std::cout << "Your shirt is " << shirt << '\n';

	std::cout << "Enter a new color: ";
	std::cin >> shirt;
	if (!std::cin)
		std::cout << "Invalid\n";
	else
		std::cout << "Your shirt is now " << shirt << '\n';

	return 0;
}