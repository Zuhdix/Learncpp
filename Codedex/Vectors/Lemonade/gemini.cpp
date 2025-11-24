#include <iostream>
#include <vector>

int main () {

    std::vector<int> lemonade {25, 28, 40, 85, 76};
    std::vector<double> sales {75.50, 89.25, 60.00, 102.45, 95.10};

    // Output elemen terakhir (index 4)
    std::cout << "Lemonade terakhir: " << lemonade[4] << "\n";
    std::cout << "Sales terakhir: " << sales[4] << "\n";

    // Hitung harga per lemonade
    // Perhatikan: sales (double) dibagi lemonade (int) hasilnya double. Aman.
    double price_per_cup = sales[4] / lemonade[4];

    std::cout << "Price per cup: " << price_per_cup << "\n";

    // Tes UB (Jangan lakukan di production!)
    // std::cout << lemonade[9]; 

    return 0;
}
