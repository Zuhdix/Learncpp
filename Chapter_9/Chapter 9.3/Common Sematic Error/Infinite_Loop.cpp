#include <iostream>

int main()
{
    int count{ 1 };
    while (count <= 10) // this condition will never be false
    {
        std::cout << count << ' '; // so this line will repeatedly execute
    }

    std::cout << '\n'; // this line will never execute

    return 0; // this line will never execute
}

#include <iostream>

int main()
{
    for (unsigned int count{ 5 }; count >= 0; --count)
    {
        if (count == 0)
            std::cout << "blastoff! ";
        else
            std::cout << count << ' ';
    }

    std::cout << '\n';

    return 0;
}