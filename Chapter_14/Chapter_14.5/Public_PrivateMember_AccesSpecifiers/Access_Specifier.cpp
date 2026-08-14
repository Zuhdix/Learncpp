#include <iostream>

class Date
{
// Any members defined here would default to private
/* Default member tanpa ketik private, 
   tapi klo private di bawah public 
   wajib private seperti kode ini
*/

public: // here's our public access specifier
	void print() const // public due to above public: specifier
	{
		// member can acces other private members
		std::cout << m_year << '/' << m_month << '/' << m_day;
	}

private: // here's our private access specifier
	int m_year{ 2020 }; // private due to above private: specifier
	int m_month{ 14 }; // sama
	int m_day{ 10 }; // sama
};

int main()
{
	Date d{};
	d.print(); // okay, main() allowed to access public members

	return 0;
}