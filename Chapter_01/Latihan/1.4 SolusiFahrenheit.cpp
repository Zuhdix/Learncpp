#include <iostream>
using namespace std;

int main() {

	cout << "fahrenheit: ";
	int fahrenheit;
	cin  >> fahrenheit;

	double celsius = (fahrenheit - 32) / 1.8;
	cout << "Celsius: " << celsius << endl;

	return 0;
}
