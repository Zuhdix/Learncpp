#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed cukup sekali di awal

    int minValue = 0;
    int maxValue = 6;

    int number1 = (rand() % (maxValue - minValue + 1)) + minValue;
    int number2 = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << "Angka acak 1: " << number1 << endl;
    cout << "Angka acak 2: " << number2 << endl;

    return 0;
}
