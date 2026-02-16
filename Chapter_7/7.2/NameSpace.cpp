//#include <iostream>
//
//void doSomething()
//{
//	std::cout << " There\n";
//}
//namespace Foo
//{
//	int doSomething(int x, int y)
//	{
//		return x + y;
//	}
//}
//
//namespace Goo
//{
//	int doSomething(int x, int y)
//	{
//		return x - y;
//	}
//}
//
//int main()
//{
//	std::cout << Foo::doSomething(5, 9) << '\n'; // operand kanan akan menyuruh compiler ke operand >kiri (namespace yang di tunjuk)
//	std::cout << Goo::doSomething(5, 9) << '\n';
//	::doSomething(); // sama seperti memanggil fungsi biasa
//
//	return 0;
//}