// C++20
// Compile: g++ -std=c++20 -Wall -Wextra -Werror -pedantic builder.cpp

#include <iostream>
#include <string>

class Builder {
private:
    std::string m_result{};

public:
    // TODO: Lengkapi supaya bisa di-chain
    Builder& append(const std::string& text) {
        m_result += text;
        return *this;
    }

    Builder& repeat(int times) {
        const std::string ori{ m_result };
        for (int i{ 1 }; i < times; ++i)
        {
            m_result += ori;
        }
        return *this;
    }

    // TODO: Reset ke default state
    void reset() {
        *this = {};
    }

    void print() const {
        std::cout << m_result << '\n';
    }
};

int main() {
    Builder b{};
    b.append("ha").repeat(3).append("!");
    b.print(); // harusnya output: hahaha!
    b.reset();
    b.print(); 
    return 0;
}