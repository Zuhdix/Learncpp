#include <iostream>
#include <optional>

std::optional<int> divide(int x, int y)
{
	if (y == 0) return std::nullopt;
	return x / y;
}

int main()
{
	auto r1{ divide(10,2) };
	auto r2{ divide(7,0) };

	std::cout << r1.value_or(-1) << '\n'; // normal karena bukan 0 y nya
	std::cout << r2.value_or(-1) << '\n'; // y nya 0 tapi karena eksplisit value_or(-1) maka y jadi -1

	if (r1)
		std::cout << *r1 << '\n'; // karena y != 0 maka outputnya normal

	std::cout << *r2 << '\n'; // disini gw gak ngerti samasekali, asumsi gw, karena nilai y nya std::nullopt yang berarti tidak ada nilai maka disini kesalah fatal terjadi
	// klo di Visual Studio namanya Unhandled Exception karena mungkin ketiadaan nilai y nya, koreksi coba
	return 0;
}