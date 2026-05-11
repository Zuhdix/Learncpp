/*

switch (1)
{
    int a; // okay: definition is allowed before the case labels
    int b{ 5 }; // illegal: initialization is not allowed before the case labels
    #// karena switch gak bisa mencapai int b ( eksekusi mulai terjadi di case 1)
case 1:
    int y; // okay but bad practice: definition is allowed within a case
    y = 4; // okay: assignment is allowed
    break;

case 2:
    int z{ 4 }; // illegal: initialization is not allowed if subsequent cases exist (menyebabkan UB karena rawan di lewati)
    y = 5; // okay: y was declared above, so we can use it here too
    break;

case 3:
    break;
}



    #// lebih aman inisialisasi pake brace

switch (1)
{
case 1:
{ // note addition of explicit block here
    int x{ 4 }; // okay, variables can be initialized inside a block inside a case
    std::cout << x;
    break;
}

default:
    std::cout << "default case\n";
    break;
}


*/