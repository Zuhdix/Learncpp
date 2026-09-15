#include <iostream>
#include <vector>

int main()
{
	std::vector prime{ 2,3,5,7,11 };

	// C++20, returns length as a large signed integral type (langsung di conversi lewat 'ssize')
	std::cout << "length: " << std::ssize(prime) << '\n';

	// karena int lebih kecil daripada return an ssize, pake static_cast jika mau di conversi ke int biasa
	int length{ static_cast<int>(std::ssize(prime)) }; // static_cast return value to int
	std::cout << "length: " << length << '\n';

	// auto juga bisa
	auto lengthAu{ std::ssize(prime) }; // use auto to deduce signed type, as returned by std::ssize()
	std::cout << "length: " << lengthAu << '\n';

	// operator[] gak melakukan bounds check
	std::cout << prime[3]; // print 7
	std::cout << prime[9]; // invalid index (UB) meledak lah wak

	// cek pake at.()
	std::cout << prime.at(9); // invalid index (throws exception)
	return 0;
}