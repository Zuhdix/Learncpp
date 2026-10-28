#include <array>
#include <chrono>   // std::chrono functions
#include <cstddef>  // std::size_t
#include <iostream> 
#include <numeric>  // std::iota
#include <utility>  // <-- TAMBAHKAN INI UNTUK std::swap

// FIX 1: Ubah tipe ke std::size_t (unsigned) dan gunakan constexpr
constexpr std::size_t g_arrayElements{ 10000 };

class Timer
{
private:
	// Type alias biar gampang nulisnya
	using Clock = std::chrono::steady_clock;
	using Second = std::chrono::duration<double, std::ratio<1>>;

	std::chrono::time_point<Clock> m_beg{ Clock::now() };

public:
	void reset()
	{
		m_beg = Clock::now();
	}

	double elapsed() const
	{
		return std::chrono::duration_cast<Second>(Clock::now() - m_beg).count();
	}
};

void sortArray(std::array<int, g_arrayElements>& array)
{
	// Step through each element of the array
	// kecuali terakhir karena pasti dah ke-urut
	for (std::size_t startIndex{ 0 }; startIndex < (g_arrayElements - 1); ++startIndex)
	{
		std::size_t smallestIndex{ startIndex };

		for (std::size_t currentIndex{ startIndex + 1 }; currentIndex < g_arrayElements; ++currentIndex)
		{
			if (array[currentIndex] < array[smallestIndex])
			{
				smallestIndex = currentIndex;
			}
		}

		// FIX 2: std::swap sekarang dikenali berkat <utility>
		std::swap(array[startIndex], array[smallestIndex]);
	}
}

int main()
{
	std::array<int, g_arrayElements> array;
	std::iota(array.rbegin(), array.rend(), 1); // fill the array with values 10k to 1

	Timer t;

	sortArray(array);

	std::cout << "Time taken: " << t.elapsed() << " seconds\n";

	return 0;
}