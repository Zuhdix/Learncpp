#include <iostream>

void tryReroute(int* ptr)
{
	int local = 99;
	ptr = &local; // arahkan ke local
	*ptr = 42; // ubah local (yang di tunjuk ptr) ke 42 ini intinya males ngetik.
}

int main()
{
	int x{ 5 }; // harusnya pake {} dong, masa lu pake = si.
	tryReroute(&x);
	std::cout << x << '\n'; // output 5, karena nyetak variabel normal, bukan fungsi atau hasil function call

	return 0;
}

// tentang tadi 
int* x{}; // ini emang valid tapi tetep aja bahaya klo digunakan, jadi yah gw gak usah nginget, ngapain juga nginget hal yang gak akan pernah gw gunakan.