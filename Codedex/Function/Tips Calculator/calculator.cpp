#include <iostream>

// menampilkan menu dan menerima input
double tips_menu() {
    std::cout << "leave a tip like 15%, 20%, 25%: ";
    double input{};
    std::cin >> input;
    return input;
}

// menghitung persentasi berdasarkan tips_menu
double tips_calculator (double bill, double tips ) {
    return bill * (tips / 100.0);
}



int main() {
    std::cout << "Input your bill: ";

    double bill {};
    std::cin >> bill;

    std::cout << "How many people are there: ";
    int person{};
    std::cin >> person;

    double percent {tips_menu()};
    double resultTips{tips_calculator(bill, percent)};

    std::cout << "tips result: " << resultTips << "$ \n";

    double final_result {(bill + resultTips) / person};

    std::cout << "Every single one must pay: " << final_result << "$ \n";

    return 0;
}
