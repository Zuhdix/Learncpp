//#include <iostream>
//// prefer g_value (global explisit)
//int value{ 5 }; // global variable
//
//int main()
//{
//    int value{ 7 }; // hides the global variable value
//    ++value; // increments local value, not global value
//
//    --(::value); // decrements global value, not local value (parenthesis added for readability)
//
//    std::cout << "local variable value: " << value << '\n';
//    std::cout << "global variable value: " << ::value << '\n'; // cara akses explisit global
//
//    return 0;
//} // local value is destroyed