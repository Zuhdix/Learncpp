#include <iostream>

class Dollars
{
private:
    int m_dollars{};

public:
    explicit Dollars(int d) // now explicit
        : m_dollars{ d }
    {
    }

    int getDollars() const { return m_dollars; }
};

void print(Dollars d)
{
    std::cout << "$" << d.getDollars();
}

int main()
{
    // gak boleh konversi
//    print(5); // compilation error because Dollars(int) is explicit
    print(Dollars{ 5 }); // langsung pake temp objek
    print(static_cast<Dollars>(5)); // ok: static_cast will use explicit constructors

    Dollars d1(5); // bisa
    Dollars d2{ 8 }; // bisa

    return 0;
}