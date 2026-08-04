#include <iostream>

auto getInput(auto input)
{
	std::cout << "Enter a value: ";
	std::cin >> input;
	return input;
}

struct RevenueWeb
{
	int adsWatched{};
	double percetageUserClickedAds{};
	double avgEarningsPerClick{};
};

void printRevenueWeb(const RevenueWeb& revenueWeb) // pass by reference to avoid copying
{
	std::cout << "Ads Watched: " << revenueWeb.adsWatched << "\n";
	std::cout << "Percentage User Clicked Ads: " << revenueWeb.percetageUserClickedAds / 100 << "\n";
	std::cout << "Average Earnings Per Click: " << revenueWeb.avgEarningsPerClick / 3  << "\n";

	std::cout << "You made today is " << revenueWeb.adsWatched * revenueWeb.percetageUserClickedAds / 100 * revenueWeb.avgEarningsPerClick / 3 << "\n";
}

int main()
{
	std::cout << "You can enter Ads Watched, Percentage User Clicked Ads, Average Earnings Per Click\n";
	
	RevenueWeb revenueWeb{
		getInput(0), // adsWatched
		getInput(0.0), // percetageUserClickedAds
		getInput(0.0) // avgEarningsPerClick
	};

	printRevenueWeb(revenueWeb);

	return 0;
}