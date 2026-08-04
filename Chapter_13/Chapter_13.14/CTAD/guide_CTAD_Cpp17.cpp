// define our own Pair type
template <typename T, typename U>
struct Pair
{
	T first{};
	U second{};
};

// Here's a deduction guide for our Pair (needed in C++17 only)
// Pair objects initialized with arguments of type T and U should deduce to Pair<T, U>
template <typename T, typename U>
Pair(T, U) -> Pair<T, U>;

int main()
{
	Pair<int, int>  p1{ 1,2 }; // ok: we're explicitly specifying the template arguments
	Pair p2{ 1,2 };		// compile erro in C++17 (okay in C++20)

	return 0;
}