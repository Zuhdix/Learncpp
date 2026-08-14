#include <iostream>
#include <string>
#include <string_view>

class Employee
{
private:
    std::string m_name{};

public:
    Employee(std::string_view name)
        : m_name{ name }
    {
    }

    const std::string& getName() const { return m_name; }
};

void printEmployee(Employee e) // has an Employee parameter
{
    std::cout << e.getName();
}

int main()
{
 //   printEmployee("Joe"); // we're supplying an string literal argument
 //// karena berkali kali konversi makannya kode diatas error 

    using namespace std::literals;
    printEmployee("sho"sv); // now a std::string_view literal

    printEmployee(Employee{ "Dan" }); // secara explisit
    return 0;
}