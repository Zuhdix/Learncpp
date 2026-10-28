#include <iostream>

int main()
{
	int* ptr{ new int }; // dynamically allocate an integer
	*ptr = 7; // masukkan nilai ke lokasi memori

	delete ptr; // return memori ke OS, ptr jadi dangling

	std::cout << *ptr; // Dereference ke dangling jadi UB

	delete ptr; // dealokasi memori lagi juga UB


		///* Sama Bahaya nya juga *///
	int* ptr{ new int{} }; // dynamically allocate an integer
	int* otherPtr{ ptr }; // otherPtr is now pointed at that same memory location

	delete ptr; // return the memory to the operating system.  ptr and otherPtr are now dangling pointers.
	ptr = nullptr; // ptr is now a nullptr

	// however, otherPtr is still a dangling pointer!

	return 0;
}