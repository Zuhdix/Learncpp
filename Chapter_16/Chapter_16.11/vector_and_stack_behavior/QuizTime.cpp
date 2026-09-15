#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& out,const std::vector<int>& stack)
{
	out << "\t(Stack: ";

	if (stack.empty())
		out << "empty";	

	for (std::size_t i{ 0 }; i < stack.size(); ++i)
	{
		if (i > 0) out << ' ';
		out << stack[i];
	}

	out << ")\n";

	return out;
}

int main()
{
	std::vector<int> stack{};
	std::cout << stack;

	stack.push_back(1);
	std::cout << "Push 1 " << stack;

	stack.push_back(2);
	std::cout << "Push 2 " <<stack;

	stack.push_back(3);
	std::cout << "Push 3 " <<stack;

	stack.pop_back();
	std::cout << "Pop " <<stack;

	stack.push_back(4);
	std::cout << "Push 4 " << stack;

	stack.pop_back();
	std::cout << "Pop " <<stack;

	stack.pop_back();
	std::cout << "Pop " <<stack;

	stack.pop_back();
	std::cout << "Pop " <<stack;



	return 0;
}