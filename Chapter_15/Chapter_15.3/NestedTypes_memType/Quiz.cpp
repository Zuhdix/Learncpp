#include <iostream>

class TrafficLight
{
public:
	enum State
	{
		red,
		green,
		yellow,
	};

private:
	State m_state{ red };

public:

	TrafficLight& next()
	{
		if (m_state == red)
		{
			m_state = green;
		}
		else if (m_state == green)
		{
			m_state = yellow;
		}
		else if (m_state == yellow)
		{
			m_state = red;
		}

		return *this;
	}

	void print() const
	{
		switch (m_state)
		{
		case red:	std::cout << "Red\n"; break;
		case green:	std::cout << "Green\n"; break;
		case yellow: std::cout << "Yellow\n"; break;
		default:	std::cout << "???\n"; break;
		}
	}
};

int main()
{
	TrafficLight light{};
	light.print();
	light.next().next().print();
	light.next().print();

	// TrafficLight::State s{ TrafficLight::red };


	return 0;
}