#include <iostream>

class Something
{
    int m_x{};

public:
    Something(int x)
        : m_x{ x }
    {
        std::cout << "Normal constructor\n";
    }

    Something(const Something& s)
        : m_x{ s.m_x }
    {
        std::cout << "Copy constructor\n"; // ini gak akan di eksekusi (copy elision)
    }

    void print() const { std::cout << "Something(" << m_x << ")\n"; }
};

int main()
{
    Something s{ Something { 5 } }; // focus on this line
    s.print();
    
    // lebih langsung dan tanpa copy2 gak jelas
    Something s1{ 5 }; // only invokes Something(int), no copy constructor

    return 0;
}