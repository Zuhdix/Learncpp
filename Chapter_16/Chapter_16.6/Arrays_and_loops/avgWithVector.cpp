#include <iostream>
#include <vector>

int main()
{
	std::vector testScore{ 84,92,76,81,56 };
	std::size_t length{ testScore.size() };

	// lebih baik tapi masih ribet
//	int average{ (testScore[0] + testScore[1] + testScore[2] + testScore[3] + testScore[4]) / static_cast<int>(length) };

	// pake loop the best option
	int average{ 0 };
	for (std::size_t index{ 0 }; index < length; ++index) // index from 0 to length-1
		average += testScore[index]; // add the value of element with index 'index'
	average /= static_cast <int>(length); // calculate the avg

	std::cout << "The class average is: " << average << '\n';

	return 0;
}