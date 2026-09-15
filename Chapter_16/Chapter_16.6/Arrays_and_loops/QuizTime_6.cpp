#include <iostream>
#include <vector>
#include <string_view>
#include <cassert>

template <typename T,typename V>
void fizzBuzz(const std::vector<T>& divisors, const std::vector<V>& words, int count)
{
	assert(divisors.size() == words.size() && "fizzbuzz: array sizes don't match");
	for (int i{ 1 }; i <= count;++i)
	{
		bool printed_word{ false };
		for (std::size_t index{ 0 }; index < divisors.size(); ++index)
		{
			if (i % divisors[index] == 0)
			{
				std::cout << words[index];
				printed_word = true;
			}
		}

		if (!printed_word)
		{
			std::cout << i;
		}
		std::cout << '\n';
	}
}

int main()
{
	static const std::vector<int> divisors{ 3,5,7,11,13,17,19 };
	static const std::vector<std::string_view> words {"fizz", "buzz", "pop", "bang", "jazz", "pow", "boom"};

	fizzBuzz(divisors, words, 150);

	return 0;
}