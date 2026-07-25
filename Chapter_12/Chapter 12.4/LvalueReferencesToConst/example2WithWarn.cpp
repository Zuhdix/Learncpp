#include <iostream>

int main()
{	
	// case 1
	const double& r1{ 5 }; // inisialisasi temporary double dengan 5, r1 bind ke temp

	std::cout << r1 << '\n'; // print 5

	// case 2
	char c{ 'a' };
	const int& r2{ c }; // temporary int initialized with value 'a', r2 binds to temporary
	// temporary karena ref nya ke temporary int bukan ke char nya

	std::cout << r2 << '\n'; // print 97 (karena r2 ref ke int)
	std::cout << c << '\n';

	c = 'z';

	std::cout << c << '\n';
	std::cout << r2 << '\n'; // tetap 97 karena r2 me-ref ke temporary int bukan ke char (warn)

	return 0;
}

// Contoh lain warn
#include <iostream>

int main()
{
	short bombs{ 1 };         // I can has bomb! (note: type is short)

	const int& you{ bombs };  // You can has bomb too (note: type is int&)
	--bombs;                   // Bomb all gone

	if (you)                   // You still has?
	{		// you masih hidup karena me-ref ke temporary int bukan ke short
		std::cout << "Bombs away!  Goodbye, cruel world.\n"; // Para bailar la bomba
	}

	return 0;
}