#include <iostream>
#include <string>


template<typename T, typename V, typename Z>
class Triad
{
private:
	T m_first{};
	V m_second{};
	Z m_third{};

public:
	Triad(const T& first, const V& second, const Z& third);

	void print() const;

	// Di dalam class — jauh lebih bersih:
	T first() const { return m_first; }
	V second() const { return m_second; }
	Z third() const { return m_third; }
};

template<typename T, typename V, typename Z>
Triad<T,V,Z>::Triad(const T& first, const V& second, const Z& third)
	: m_first{ first }
	, m_second{ second }
	, m_third{ third }
{
}

template<typename T, typename V, typename Z>
void Triad<T,V,Z>::print() const
{
	std::cout << "[" << m_first << ", " << m_second << ", " << m_third << "]";
}

// iw najisnye
//template<typename T, typename V, typename Z>
//T Triad<T,V,Z>::first() const { return m_first;}
//
//template<typename T, typename V, typename Z>
//V Triad<T,V,Z>::second() const { return m_second; }
//
//template<typename T, typename V, typename Z>
//Z Triad<T,V,Z>::third() const { return m_third; }

int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';
	std::cout << t1.first() << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}