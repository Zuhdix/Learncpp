#include <iostream>
#include <cmath>

using namespace std;

int main() {

	cout << "Masukkan Radius: ";
	double radius;
	cin >> radius;

	double pi = 3.14;

	double area = pi * pow(radius, 2);
	cout << area;

	return 0;
}
