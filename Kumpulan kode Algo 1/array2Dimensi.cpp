#include<iostream>

int main()
{	
	int array2Dim[3][3] // array 2 dimensi umum dalam matriks
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << array2Dim[i][j] << ' ';
		}
	}

	return 0;

}
