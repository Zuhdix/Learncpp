//#include <iostream>
//
//int main()
//{
//	// fallthrough terjadi ketika tidak ada break atau return (wajib pake break or return biar gak kena fallthrough)
//	switch (2)
//	{
//	case 1:
//		std::cout << 1 << '\n';
//	case 2: // case ketemu disini
//		std::cout << 2 << '\n'; // ini dan dibawahnya di eksekusi
//		[[fallthrough]]; // atribut fall yang ekplisit biar compiler mengabaikannya.
//		// tanda ; diatas mengindikasikan null statement.
//	case 3:
//		std::cout << 3 << '\n';
//	case 4:
//		std::cout << 4 << '\n';
//	default:
//		std::cout << 5 << '\n';
//	}
//
//	return 0;
//}