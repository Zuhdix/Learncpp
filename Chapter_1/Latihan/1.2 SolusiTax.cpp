#include <iostream>
using namespace std;
//Menghitung total pajak dari stateTax dan countytTax

int main() {

	double sales{ 95000 };
	cout << "Sales: $" << sales << '\n';

	const double stateTaxRate{ .04 }; // const agar variabel tidak bisa diganti
	double stateTax{ sales * stateTaxRate }; //stateTaxRate digunakan agar lebih mudah dibaca dan diganti jika pajak naik
	cout << "state tax: $" << stateTax << '\n';

	const double countyTaxRate{ .02 };
	double countyTax{ sales * countyTaxRate };
	cout << "county tax: $" << countyTax << '\n';

	double totalTax{ stateTax + countyTax };
	cout << "Total Pajak: $" << totalTax << '\n';


	return 0;
}
