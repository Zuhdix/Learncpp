#include <iostream>

inline namespace V1		// ini juga bisa mixing dengan unnamed (inline unnamespace)
{
	void doSomething()
	{
		std::cout << "V1\n";
	}
}

namespace V2
{
	void doSomething()
	{
		std::cout << "V2\n";
	}
}

int main()
{
	V1::doSomething();
	V2::doSomething();

	doSomething(); // ini referensi ke inline V1 (sama kaya unnamedspace)

	return 0;
}