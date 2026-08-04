
//// klo g_x const dia jadi internal
//int g_x{ 2 }; // non-constant globals are external by default (no need to use extern)
//
//// untuk const, di tulis extern secara explisit.
//extern const int g_y{ 3 }; // const globals can be defined as extern, making them external
//extern constexpr int g_z{ 3 }; // constexpr globals can be defined as extern, making them external (but this is pretty useless, see the warning in the next section)
//
//int main()
//{
//    return 0;
//}

// global variable definitions
int g_x{ 2 };              // non-constant globals have external linkage by default
extern const int g_y{ 3 }; // this extern gives g_y external linkage