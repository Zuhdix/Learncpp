/*
    // if secara implisit membuat blok baru
if (x > 10)
    std::cout << x << " is greater than 10\n"; // this line implicitly considered to be inside a block

    // switch tidak membuat blok baru, menjadikannya satu dengan blok switch bukan blok case.
switch (1)
{
case 1: // does not create an implicit block
    foo(); // this is part of the switch scope, not an implicit block to case 1
    break; // this is part of the switch scope, not an implicit block to case 1
default:
    std::cout << "default case\n";
    break;
}


*/