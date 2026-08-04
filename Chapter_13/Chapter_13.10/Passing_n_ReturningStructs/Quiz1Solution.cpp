#include <iostream>

// pembentukan struct untuk menyimpan data revenue web
struct Advertising
{
	int adsWatched{};
	double percentageUserClickedAds{};
	double avgEarningsPerClick{};
};

// Struktur fungsi untuk mendapatkan input dari pengguna dan mengembalikan struct Advertising
Advertising webRevenue()
{
	Advertising temp{};
	std::cout << "Enter the number of ads watched: ";
	std::cin >> temp.adsWatched;
	std::cout << "Enter the percentage of users who clicked on ads: ";
	std::cin >> temp.percentageUserClickedAds;
	std::cout << "Enter the average earnings per click: ";
	std::cin >> temp.avgEarningsPerClick;
	return temp; // ini nantinya akan di keep di ad sebagai variabel
}

void printWebRevenue(const Advertising& ad) // karena ini pass by cons ref param jadi ini langsung merujuk ke variabel struct ad di main jadi tidak perlu di copy lagi
{
	std::cout << "Ads Watched: " << ad.adsWatched << "\n";
	std::cout << "Percentage User Clicked Ads: " << ad.percentageUserClickedAds / 100 << "\n";
	std::cout << "Average Earnings Per Click: " << ad.avgEarningsPerClick<< "\n";
	std::cout << "Total Today's Revenue: " 
		<< ad.adsWatched * ad.percentageUserClickedAds / 100 * ad.avgEarningsPerClick<< "\n";
} // semua kode void nilainya merujuk ke webRevenue() yang sudah di keep di ad yang berpondasi struct Advertising

int main()
{
	Advertising ad{ webRevenue()};
	printWebRevenue(ad);
	return 0;
}




/*	ALEX VERSION	*/
#include <iostream>

// First we need to define our Advertising struct
struct Advertising
{
    int adsShown{};
    double clickThroughRatePercentage{};
    double averageEarningsPerClick{};
};

Advertising getAdvertising()
{
    Advertising temp{};
    std::cout << "How many ads were shown today? ";
    std::cin >> temp.adsShown;
    std::cout << "What percentage of ads were clicked on by users? ";
    std::cin >> temp.clickThroughRatePercentage;
    std::cout << "What was the average earnings per click? ";
    std::cin >> temp.averageEarningsPerClick;

    return temp;
}

void printAdvertising(const Advertising& ad)
{
    std::cout << "Number of ads shown: " << ad.adsShown << '\n';
    std::cout << "Click through rate: " << ad.clickThroughRatePercentage << '\n';
    std::cout << "Average earnings per click: $" << ad.averageEarningsPerClick << '\n';

    // The following line is split up to reduce the length
    // We need to divide ad.clickThroughRatePercentage by 100 because it's a percent of 100, not a multiplier
    std::cout << "Total Earnings: $"
        << (ad.adsShown * ad.clickThroughRatePercentage / 100 * ad.averageEarningsPerClick) << '\n';
}

int main()
{
    // Declare an Advertising struct variable
    Advertising ad{ getAdvertising() };
    printAdvertising(ad);

    return 0;
}