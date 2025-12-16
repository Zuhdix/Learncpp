#include <iostream>
#include <string>

class WealthyFamily {
private:
	int netWorth{};
public:
	std::string familyName{};

	// constructor katanya
	WealthyFamily(int val) : netWorth(val) {}

	// Getter
	int getPrivateInt() {
		return netWorth;
	}

	//Setter
	void setPrivateInt(int val) {
		netWorth = val;
	}
};

int main()
{
	WealthyFamily oldMoney(1000000);
	oldMoney.familyName = "The Rockefeller";

	std::cout << oldMoney.familyName << ":\nWe prefer not to discuss such matters. \n\n";

	WealthyFamily newMoney(99999);
	newMoney.familyName = "The Fabulous";

	std::cout << newMoney.familyName << '\n';
	std::cout << "We are worth $" << newMoney.getPrivateInt() << '\n';

	return 0;
}
