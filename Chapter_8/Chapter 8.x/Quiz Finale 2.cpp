#undef NDEBUG

#include <cassert> // for assert
#include <iostream>

bool isPrime(int x)
{
	if (x <= 1)
		return false;

	for (int count{ 2 }; count < x / 2; ++count) {
		if (x % count == 0)
			return false;
	}

	return true;

    // versi gemini
    // for (int count{ 2 }; count <= x / 2; ++count)
}

int main()
{
    //assert(!isPrime(0)); // terminate program if isPrime(0) is true, nilai awal boolean adalah false, berarti ini true ya?
    //assert(!isPrime(1));
    //assert(isPrime(2));  // terminate program if isPrime(2) is false , nilai awal boolean false ini bukan not jadi false ya?
    //assert(isPrime(3));
    //assert(!isPrime(4));
    //assert(isPrime(5));
    //assert(isPrime(7));
    //assert(!isPrime(9));
    //assert(isPrime(11));
    //assert(isPrime(13));
    //assert(!isPrime(15));
    //assert(!isPrime(16));
    //assert(isPrime(17));
    //assert(isPrime(19));
    //assert(isPrime(97));
    //assert(!isPrime(99));
    //assert(isPrime(13417));

    assert(isPrime(97));

	std::cout << "Success!\n";

	return 0;
}