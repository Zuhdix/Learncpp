#include <iostream>

class Timer
{
    int m_seconds{ 0 };
    bool m_running{ false };

public:
    Timer() = default; // minimal ada ini biar valid
    Timer(int seconds, bool running)
        : m_seconds{ seconds }
        , m_running{ running }
    {
    }

    void print() const
    {
        std::cout << "(" << m_seconds << ", " << m_running << ")\n";
    }
};

int main()
{
    Timer t1{ 30, true };
    t1.print();

    Timer t2{};         // gak valid, harus ada minimal explicit default constructor
    t2.print();

    return 0;
}