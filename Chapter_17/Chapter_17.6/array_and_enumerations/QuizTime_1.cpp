#include <array>
#include <iostream>
#include <string>
#include <string_view>

namespace Animal
{
	enum Type
	{
		chicken,
		dog,
		cat,
		elephant,
		duck,
		snake,
		max_animals
	};

	struct Data
	{
		std::string_view animalName{};
		int numberOfLegs{};
		std::string_view animalSounds{};
	};

	using namespace std::string_view_literals;
	constexpr std::array animalData
	{
	Data{"chicken"sv, 2, "cluck"sv},
	Data{ "dog"sv, 4, "woof"sv },
	Data{"cat"sv, 4, "meow"sv},
	Data{"elephant"sv, 4, "pawoo"sv},
	Data{"duck"sv, 2, "quack"sv},
	Data{"snake"sv, 0, "hissss"sv},
	};
	static_assert(std::size(animalData) == max_animals);

	constexpr std::array types
	{
		chicken,
		dog,
		cat,
		elephant,
		duck,
		snake,
	};
	static_assert(std::size(types) == max_animals);
}

constexpr std::string_view getAnimalName(Animal::Type type)
{
	return Animal::animalData[static_cast<std::size_t>(type)].animalName;
}

// operator<< cara cetak array
std::ostream& operator<<(std::ostream& out, Animal::Type type)
{
	return out << getAnimalName(type);
}

std::istream& operator>>(std::istream& in, Animal::Type& type)
{
	std::string input{};
	std::getline(in >> std::ws, input);
	
	for (auto c : Animal::types)
	{
		if (input == Animal::animalData[static_cast<std::size_t>(c)].animalName) // animalData[0] 'enum(int)'
		{
			type = c;
			return in;
		}
			
	}

	in.setstate(std::ios_base::failbit);

	return in;
}

int main()
{
	std::cout << "Enter an animal: ";
	Animal::Type animal{};
	std::cin >> animal;
	
	if (!std::cin)
	{
		std::cout << "That animal couldn't be found.\n";
	}
	else
	{
		std::cout << "A " << animal << " has " << Animal::animalData[static_cast<std::size_t>(animal)].numberOfLegs << " legs and says " << Animal::animalData[static_cast<std::size_t>(animal)].animalSounds << ".\n";
	}

	std::cout << "\nHere is the data for the rest of the animals: \n";
	for (auto c : Animal::types)
	{
		if (std::cin && c == animal)
		{
			continue;
		}
		else {
			std::cout << "A " << c << " has " << Animal::animalData[static_cast<std::size_t>(c)].numberOfLegs 
				<< " legs and says " << Animal::animalData[static_cast<std::size_t>(c)].animalSounds << ".\n";
		}
	}

	return 0;
}