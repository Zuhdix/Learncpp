// C++20
// Compile: g++ -std=c++20 -Wall -Wextra -Werror -pedantic idcard.cpp

#include<iostream>
#include<string>
#include<string_view>

class IDCard {
private:
    //TODO: tambahkan static member untuk ID generator, mulai dari 1000
    static inline int s_idGenerator{ 1000 };
    int m_id{};
    std::string m_name{};

public:
    IDCard(std::string_view name)
        //TODO: inisialisasi m_id dari generator
        : m_id{s_idGenerator++}
        , m_name{ name }
    {
    }

    void print() const {
        std::cout << "ID: " << m_id << ", Name: " << m_name << '\n';
    }
};

int main() {
    IDCard alice{ "Alice" };
    IDCard bob{ "Bob" };
    IDCard charlie{ "Charlie" };

    alice.print();    // ID: 1000, Name: Alice
    bob.print();      // ID: 1001, Name: Bob
    charlie.print();  // ID: 1002, Name: Charlie

    return 0;
}