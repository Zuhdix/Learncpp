#include <iostream>
#include <string>
#include <string_view>
#include <vector>

class Foo
{
private:
	std::string m_a{};
	int m_b{};

public:
	Foo(std::string_view a, int b)
		: m_a{ a }, m_b{ b }
	{
	}

	explicit Foo(std::string_view a, int b)
		: m_a{ a }, m_b{ b }
	{
	}
};

int main()
{
	std::vector<Foo> stack{};

	// When we already have an objecct, push_bakc and emplace_back are similiar in efficiency
	Foo f{ "a",2 };
	stack.push_back(f);		// prefer this one
	stack.emplace_back(f);

	// When we need to create a temporary object to push, emplace_back is more efficient
	stack.push_back({ "a", 2 }); // create temp object, copy to the vector
	stack.emplace_back({ "a", 2 }); // forwards the arguments so the object can be created directly in the vector (no copy made)

	// push_back won't use explicit constructors, emplace_back will
	stack.push_back({ 2 }); // compile error: Foo(int) is explicit
	stack.emplace_back(2); // oke


	return 0;
}