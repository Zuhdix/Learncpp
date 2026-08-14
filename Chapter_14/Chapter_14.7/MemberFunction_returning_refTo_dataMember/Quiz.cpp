#include <iostream>
#include <string>

class Person
{
private:
    std::string m_name{};
    int m_age{};

public:
    void setName(std::string_view name) { m_name = name; }
    void setAge(int age) { m_age = age; }

    const std::string& getName() const { return m_name; } // (A)
    int getAge() const { return m_age; }
};

Person createPerson(std::string_view name, int age)
{
    Person p;
    p.setName(name);
    p.setAge(age);
    return p;
}

int main()
{
    std::cout << createPerson("Alice", 30).getName(); // (C) langsung dipakai full ekspression
    std::string val{ createPerson("Koni", 31).getName() }; // Cara kedua: punya variabel sendiri, jadi gak bakal dangling
    std::cout << val;
}