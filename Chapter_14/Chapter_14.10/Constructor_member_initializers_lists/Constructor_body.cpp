#include <iostream>

class Foo
{
private:
    int m_x{ 0 };
    int m_y{ 1 };

public:
    Foo(int x, int y)
        : m_x{x}, m_y{y} // harusnya gini doang dan badan fungsi kosong
    {
        m_x = x; // incorrect: this is an assignment, not an initialization
        m_y = y; // incorrect: this is an assignment, not an initialization
    }

    void print() const
    {
        std::cout << "Foo(" << m_x << ", " << m_y << ")\n";
    }
};

int main()
{
    Foo foo{ 6, 7 };
    foo.print();

    return 0;
}