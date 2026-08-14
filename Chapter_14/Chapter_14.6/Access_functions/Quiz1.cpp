#include <iostream>

class Temperature
{
private:
	double m_celcius{};

public:
	double getCelcius() const { return m_celcius; };
	void setCelcius(double celcius)
	{
		if (celcius < -273.15) {
			m_celcius = 0;
		}
		else{
			m_celcius = celcius;
		}
	}

	double getFahrenheit() const { return m_celcius * 9.0 / 5.0 + 32; }
};

int main()
{
	Temperature t{};
	t.setCelcius(300);
	std::cout << "The temp is: " << t.getCelcius() << " celcius\n";

	std::cout << "The fahrenheit is : " << t.getFahrenheit() << " fahrenheit\n";

	return 0;
}