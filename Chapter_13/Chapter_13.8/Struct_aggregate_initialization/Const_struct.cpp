struct Rectangle
{
	double length{};
	double width{};
};

int main()
{
	const Rectangle rect{ 10.0, 5.0 }; // const object of Rectangle
	const Rectangle zero{}; // const object of Rectangle with default values
}