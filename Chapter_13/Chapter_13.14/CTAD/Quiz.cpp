#include<string>

template <typename T>
struct Box
{
	T value{};
	int count{};
};

template <typename T>
Box(T, int) -> Box<T>; 

int main()
{
	Box b1{ 3.14, 5 };
	Box b1{ std::string {"hello"}, 3 };
}