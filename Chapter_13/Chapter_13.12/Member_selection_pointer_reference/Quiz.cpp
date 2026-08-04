#include <iostream>
#include <string>

struct Engine
{
	int horsepower{};
};

struct Car
{
	std::string brand{};
	Engine engine{};
};

int main()
{
	Car myCar{ "Toyota", {150} };
	Car* carPtr{ &myCar };
	Engine* engPtr{ &myCar.engine };

	std::cout << "carPtr ->: " << (carPtr->engine).horsepower << '\n';
	std::cout << "carPtr . : " << ((*carPtr).engine).horsepower << '\n'; // klo dari bentuk (*(*ptr).c).y sih jelas gak valid syntax gw, tapi pas coba bentuk itu malah gak bisa di compile
	std::cout << "engPtr : " << engPtr ->horsepower << '\n';
	std::cout << "myCar : " << myCar.brand << " " << myCar.engine.horsepower;

	return 0;
}