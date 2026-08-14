#include <iostream>
#include <string>

class Employee
{
	std::string m_name{};
	
public:
	void setName(std::string_view name) { m_name = name; }
	const std::string& getName() const { return m_name; } // getter returns by const ref
	// tipe data harus sama, m_name string dan getName juga string
	// atau pake auto lebih aman dari konversi tidak perlu (deduction)
	const auto& getName2() const { return m_name; } 
}; // tapi prefer return explisit memperjelas dokumentasi

int main()
{
	Employee joe{}; // joe exists until end of function
	joe.setName("Joe");

	std::cout << joe.getName(); // returns jo.m_name by reference

	return 0;
}