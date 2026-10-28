// C++20
// Compile: g++ -std=c++20 -Wall -Wextra -Werror -pedantic main.cpp

#include<iostream>
#include<vector>

int main()
{
    std::vector<int> v{ 10, 20, 30, 40, 50 };

    for (auto it{ v.begin() }; it != v.end(); ++it)
    {
        if (*it == 30)
            it = v.erase(it);  // hapus elemen yang nilainya 30

        std::cout << *it << ' ';
    }

    std::cout << '\n';
    return 0;
}


// C++20
// Compile: g++ -std=c++20 -Wall -Wextra -Werror -pedantic main.cpp

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{ 10, 20, 30, 40, 50 };

    for (auto it{ v.begin() }; it != v.end(); /* kosongkan increment di sini */)
    {
        if (*it == 30)
        {
            it = v.erase(it); // it sudah otomatis menunjuk ke elemen berikutnya (40)
        }
        else
        {
            std::cout << *it << ' ';
            ++it;             // hanya maju jika TIDAK menghapus
        }
    }

    std::cout << '\n';
    return 0;
}