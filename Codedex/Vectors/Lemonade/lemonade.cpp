#include <iostream>
#include <vector>

int main () {

    std::vector<int> lemonade {25, 28, 40, 85, 76};
    std::vector<double> sales {75.50, 89.25, 60.00, 102.45, 95.10};

    std::cout << lemonade[4] << " \n";  // cara cetak 76 , index dimulai dari 0
    std::cout << sales[4] << " \n";

    std::cout << lemonade[4] / sales[4] << " \n";



    return 0;
}
