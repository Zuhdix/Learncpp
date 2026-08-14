#include <iostream>

struct Date
{
    int year{};
    int month{};
    int day{};

    /* kalo gak modif pake const aja, tapi klo const nya diapus pas kodenya gede = rusak */
    void incrementDay() const // made const (tadinya enggak btw)
    {
        ++day; // tetep error
    }

    void print()
    {
        std::cout << year << '/' << month << '/' << day;
    }

    void printC() const // bisa panggil variable lokal, const berlaku ke anggota (baca key insight)
    {
        std::cout << year << '/' << month << '/' << day;
    }
};

int main()
{
    const Date today{ 2020, 10, 14 }; // const class type object

    today.day += 1;     // compile error: can't modify member of const object
    today.incrementDay(); // compile error: can't call member function that modifies member of const object

    today.print(); // compile error: can't call non-const member function

    today.printC(); // ok: const object can call const member function

    today.incrementDay();

    Date today2{ 2026, 6, 8 };
    today2.print(); // bisa : can call const member function on non-const object
    return 0;
}