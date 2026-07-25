#include <iostream>

int main()
{
	int x{ 5 };
	int* ptr{ &x };

	if (ptr == nullptr) // explicit test for equivalence
		std::cout << "ptr is null\n";
	else
		std::cout << "ptr is non-null\n";

	int* nullPtr{};

	std::cout << "nullPtr is " << (nullPtr == nullptr ? "null\n" : "non-null\n");
	// explicit test for equivalence
	
	return 0;
}


#include <iostream>

int main()
{
	int x{ 5 };
	int* ptr{ &x };

	// pointers convert to Boolean false if they are null, and Boolean true if they are non-null
	if (ptr) // implicit conversion to Boolean
		std::cout << "ptr is non-null\n";
	else
		std::cout << "ptr is null\n";

	int* nullPtr{};
	std::cout << "nullPtr is " << (nullPtr ? "non-null\n" : "null\n"); // implicit conversion to Boolean

	return 0;
}

// Assume ptr is some pointer that may or may not be a null pointer
if (ptr) // if ptr is not a null pointer
std::cout << *ptr << '\n'; // okay to dereference
else
// do something else that doesn't involve dereferencing ptr (print an error message, do nothing at all, etc...)