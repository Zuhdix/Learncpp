#include <iostream>

void printIDNumber(const int* id = nullptr)
{
	if (id)
		std::cout << "Your ID number is " << *id << ".\n";
	else
		std::cout << "Your ID number is not known.\n";
}

int main()
{
	printIDNumber(); // we don't know the user's ID yet

	int userid(34);
	printIDNumber(&userid); // we know the user's ID

	return 0;
}


// versi overloading, aman tanpa deref-null dan dapat pass literal dan rvalue

#include <iostream>

void printIDNumber()
{
	std::cout << "Your ID is not known\n";
}

void printIDNumber(int id)
{
	std::cout << "Your ID is " << id << "\n";
}

int main()
{
	printIDNumber(); // we don't know the user's ID yet

	int userid{ 34 };
	printIDNumber(userid); // we know the user is 34

	printIDNumber(62); // now also works with rvalue arguments

	return 0;
}