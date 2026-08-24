#include <chrono>
#include <random>
#include <iostream>

class Random
{
private:
	 static inline std::random_device m_rd{};

	 static std::mt19937 generate()
	 {
		 std::seed_seq ss{
			 static_cast<std::seed_seq::result_type>(
				 std::chrono::steady_clock::now().time_since_epoch().count()),
				 m_rd(), m_rd(), m_rd(), m_rd(), m_rd(), m_rd(), m_rd()
		 };
		 return std::mt19937{ ss };
	 }

	 static inline std::mt19937 mt{ generate() };
public:
	

	 static int get(int min, int max)
	 {
		 return std::uniform_int_distribution{ min, max }(mt);
	 }
};

int main()
{
	for (int count{ 1 }; count <= 10; ++count)
		std::cout << Random::get(1, 6) << '\t';
	std::cout << '\n';

	return 0;
}