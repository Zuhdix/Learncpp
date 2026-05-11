//#include<iostream>
//
//int main()
//{
//	for (int count{ 0 }; count < 10; ++count)
//	{
//		// jika angka habis dibagi 4 , skip ini
//		if ((count % 4) == 0)
//			continue; // lanjut ke iterasi selanjutnya
//
//		// jika angka tidak bisa dibagi 4
//		std::cout << count << '\n';
//
//		// jika continue akan langsung kesini
//	}
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//    int count{ 0 };
//    while (count < 10)
//    {
//        if (count == 5)
//            continue; // jump to end of loop body
//
//        std::cout << count << '\n';
//
//        ++count; // this statement is never executed after count reaches 5
//
//        // The continue statement jumps to here
//    }
//
//    return 0;
//}