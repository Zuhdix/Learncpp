#include <iostream>
#include <vector>


int main()
{
// empy vector
	std::vector<int> empty{}; // vector containing 0 int elements

// List construction (uses list constructor)
	std::vector<int> primes{ 2,3,5,7,11 }; // elemen 2,3,5,7

// vector containing 5 char elements with values a,e,i,o and u. Uses CTAD(C++17) to deduce element type char (preffered).
	std::vector vowels{ 'a','e','i','o','u' };

	std::cout << "The first prime number is: " << primes[0] << '\n';
	std::cout << "The second prime number is: " << primes[1] << '\n';
	std::cout << "The sum of thee first 5 primes is: " << primes[0] + primes[1] + primes[2] + primes[3] + primes[4] << '\n';

	std::cout << '\n';
	// No celah sangat berdekatan
	std::cout << "An int is " << sizeof(int) << " bytes\n";
	std::cout << &(primes[0]) << '\n';
	std::cout << &(primes[1]) << '\n';
	std::cout << &(primes[2]) << '\n';

	// cara penentuan jumlah elemen
	std::vector<int> data(10); // vector containing 10 elements, value-initialized to 0 (pake direct init)

	return 0;
}