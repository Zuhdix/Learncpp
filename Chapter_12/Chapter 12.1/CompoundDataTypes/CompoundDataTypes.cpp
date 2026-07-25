#include <iostream>
#include <string>

struct HeroData {
	std::string nama{};
	int totalMatch{};
};

int main()
{
	HeroData jagoan{}; // jika mau buat objek harus {} biar bersih no garbage value
	
	std::cout << "Hero: " << jagoan.nama << " | Matches: " << jagoan.totalMatch << '\n';

	return 0;
}