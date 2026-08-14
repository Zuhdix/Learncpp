#include <iostream>

class Date
{
private:
	int m_year{ 2026 };
	int m_month{ 8 };
	int m_day{ 7 };

public:
	void print()
	{
		std::cout << m_year << '/' << m_month << '/' << m_day << '\n';
	}

	int getYear() const { return m_year; }		 // getter for year
	void setYear(int year) { m_year = year; }	 // setter for year

	int getMonth() const { return m_month; }	 // getter for month
	void setMonth(int month) { m_month = month;} // setter for month

	int getDay() const { return m_day; }		// getter for day
	void setDay(int day) { m_day = day; }		// setter for day
};

int main()
{
	Date d{};
	d.setYear(2026);
	std::cout << "The year is: " << d.getYear() << '\n';

	return 0;
}