#include <iostream>
using namespace std;

int main() {

	int sales = 95000;
	int stateTax = 4;
	int countyTax = 2;
	int totalTax1 = sales * stateTax / 100;
	int totalTax2 = sales * countyTax / 100;

	cout << "Sales: $" << sales << endl;
	cout << "state tax: $" << totalTax1 << endl;
	cout << "county tax: $" << totalTax2 << endl;

	int totalTax = totalTax1 + totalTax2;

	cout << "Sisa uang dipotong pajak: $" << sales - totalTax << '\n';

	return 0;
}
