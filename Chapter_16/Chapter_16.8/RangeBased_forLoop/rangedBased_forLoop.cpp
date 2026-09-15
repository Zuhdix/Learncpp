#include <iostream>
#include <vector>

int main()
{
	std::vector fibonacci{ 0,1,1,2,3,5,8,13,21,34,55,89 };

	// for (decl_elem : objek_array)
	//		statement;
	for (auto num : fibonacci) // iterasi seluruh fibo dan copy ke num
		std::cout << num << ' '; // print the current value of 'num'
	// terbaik pake auto walaupun bisa int



	std::vector empty{};

	for (int num : empty)
		std::cout << "hi mom!\n"; // gk nyetak apapun karena container kosong

	return 0;
}