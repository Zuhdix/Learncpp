#include "Date.h"

Date::Date(int year, int month, int day)
	: m_year{ year }
	, m_month{ month }
	, m_day{ day }
{
}

void Date::print() const
{
	std::cout << "Dat(" << m_year << ", " << m_month << ", " << m_day << ")\n";
}