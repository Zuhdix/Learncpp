#include <array>
#include <iostream>

template <typename T, std::size_t Row, std::size_t Col>
using Array2d = std::array<std::array<T, Col>, Row>;


template<typename T, std::size_t Row, std::size_t Col>
constexpr int rowLength(const Array2d<T, Row, Col> &)
{
	return Row;
}

template<typename T, std::size_t Row, std::size_t Col>
constexpr int colLength(const Array2d<T, Row, Col>&)
{
	return Col;
}

int main()
{
	Array2d<double, 2, 3> grid{ {
		{1.1, 2.2, 3.3},
		{4.4, 5.5, 6.6}} };

	std::cout << "Rows: " << rowLength(grid) << '\n';
	std::cout << "Cols: " << colLength(grid) << '\n';

	return 0;
}