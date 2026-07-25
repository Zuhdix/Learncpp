int g_x{ 5 };

int main()
{
    [[maybe_unused]] constexpr int& ref1{ g_x }; // ok, can bind to global

    static int s_x{ 6 };
    [[maybe_unused]] constexpr int& ref2{ s_x }; // ok, can bind to static local

    int x{ 6 };
    [[maybe_unused]] constexpr int& ref3{ x }; // compile error: can't bind to non-static object

    // jika variabel staticnya const
    static const int s_y{ 8 }; // const int
    [[maybe_unused]] constexpr const int& refY{ s_y };
    // butuh constexpr dan constnya dan jarang digunakan karena limitasinya

	return 0;
}