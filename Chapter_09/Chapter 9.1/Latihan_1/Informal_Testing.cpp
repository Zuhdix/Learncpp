#include<iostream>

// For simplicity, we'll ignore that 'y' is sometimes counted as a vowel
bool isLowerVowel(char ch)
{
	switch (ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		return true;
	default:
		return false;
	}
}

int main()
{
	std::cout << isLowerVowel('a') << '\n'; // kode uji sementara

	std::cout << isLowerVowel('q') << '\n'; // kode uji sementara
}