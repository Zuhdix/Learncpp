#include <iostream>

void doubleIt(int* ptr)
{
	*ptr = *ptr * 2;
}

int main() {
	int* x{};	// error, nilainya null secara implisit
	doubleIt(x); // error, null gak punya alamat dan juga manggillnya harus &x (walapun error juga karena x nya sendiri bermasalah)
	std::cout << *x; // error, ABC semunya UB klo menurut pemahaman gw si.
	return 0;
}