#include <iostream>

// Menggunakan nama yang lebih deskriptif (get... menandakan input)
double get_tip_percentage() {
    std::cout << "Leave a tip (e.g., 15, 20, 25): ";
    double input{};
    std::cin >> input;
    return input;
}

// Logic murni
double calculate_tip_amount(double bill, double percentage) {
    return bill * (percentage / 100.0);
}

// Logic bisnis pemisahan tagihan (Opsional, tapi lebih rapi)
double calculate_split(double total_amount, int people) {
    if (people <= 0) return 0.0; // Safety guard
    // static_cast<double> mengubah int 'people' jadi double sementara agar pembagian akurat
    return total_amount / static_cast<double>(people);
}

int main() {
    std::cout << "Input your bill: ";
    double bill{};
    std::cin >> bill;

    std::cout << "How many people are there: ";
    int people{}; // Orang harus integer!
    std::cin >> people;

    // Guard Clause: Hentikan program jika user bodoh
    if (people <= 0) {
        std::cout << "Error: Number of people must be at least 1.\n";
        return 1; // Return non-zero tandanya error
    }

    double percent {get_tip_percentage()};
    double tip_amount {calculate_tip_amount(bill, percent)};
    double total_bill {bill + tip_amount};

    // Output Flow
    std::cout << "------------------------\n";
    std::cout << "Bill: $" << bill << "\n";
    std::cout << "Tip (" << percent << "%): $" << tip_amount << "\n";
    std::cout << "Total: $" << total_bill << "\n";
    
    // Pemanggilan fungsi split
    std::cout << "Per person (" << people << " pax): $" << calculate_split(total_bill, people) << "\n";

    return 0;
}
