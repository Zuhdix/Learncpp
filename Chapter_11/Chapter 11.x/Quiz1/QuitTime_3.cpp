#include <iostream>

template <typename T>
int count(T)
{
	static int c{ 0 };
	return ++c;
}


int main()
{
	std::cout << count(1) << '\n'; // 1
	std::cout << count(1) << '\n'; // 2
	std::cout << count(2.3) << '\n'; // oke double 2.3 potong .3 nya doang harusnya yee tapi output malah 1 ini gw bingung nih
	std::cout << count<double>(1) << '\n'; // lanjutin double tadi yang 1 jadi disini 2
	std::cout << count(9.8) << '\n';

	return 0;
}

/*
* Jebakan 1: "2.3 pasti pakai instance int karena return type int"
→ Salah. Deduction lihat ARGUMEN, bukan return type.

Jebakan 2: "tiap nilai unik = instance baru"
→ Salah. Instance baru hanya untuk TIPE baru.

Jebakan 3: "parameter pasti nyimpen nilai ke c"
→ Salah. Parameter tanpa nama → nilai langsung dibuang.

Jebakan 4: "9.8 di-narrow ke int karena return type int"
→ Salah. 9.8 dan c tidak pernah ketemu — dua jalur terpisah.
*/