#include<iostream>

// static_assert adalah keyword jadi gk butuh header

static_assert(sizeof(long) == 8, "long must be 8 bytes");
static_assert(sizeof(int) >= 4, "int must be at least 4 bytes");

int main()
{
	return 0;
}

/* assert dan error handling

	BISA langsung digunakan disini

double getInverse(double x)
{
	return 1.0 / x;
}

	ATAU kita pake error handling (karena build rilis misalnya)

double getInverse(double x)
{
	assert(x != 0.0);
	if (x == 0.0)
	   // handle error somehow (e.g. throw an exception)

	return 1.0 / x;
}

*/