#include <iostream>

void fizzBuzz(int input)
{
	// karena rangkaian if-if maka bisa di eksekusi secara bersamaan karena bukan if/else yang cuma cetak satu hasil.
	for (int i{ 1 }; i <= input; ++i)
	{
		bool print{ false };
		if (i % 3 == 0) // jika i modulus 3 = 0 maka print fizz
		{
			std::cout << "fizz";
			print = true;
		}
		if (i % 5 == 0) // jika i modulus 5 = 0 maka print buzz
		{
			std::cout << "buzz";
			print = true;
		}
		if (i % 7 == 0) // jika i modulus 7 = 0 maka print pop
		{
			std::cout << "pop";
			print = true;
		}
		/*	! berfungsi sebagai pembalik boolean, or sebagai operator yang menjaga angka agar tidak muncul.
		*	sebagai contoh ambil angka 3, !(3 == 0 true), karena sifat short circuit akan langsung di evaluasi menjadi true
			kemudian !(true) dibalik jadi false, maka angka 3-nya tidak akan tercetak.
		*/
		if (!(i % 3 == 0 || i % 5 == 0 || i % 7 == 0)) // jika tidak sama dengan angka - angka diatas maka i dibawah (angka normal) di eksekusi 
		{
			std::cout << i;
			print = false;
		}

		std::cout << '\n';
	}

}

int main()
{
	fizzBuzz(150);

	return 0;
}