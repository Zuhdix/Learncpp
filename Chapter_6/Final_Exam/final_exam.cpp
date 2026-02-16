#include <iostream>
#include <string_view> // Lebih efisien untuk string read-only

int main()
{
    std::cout << "Enter your score (0-100): ";
    int score{};
    std::cin >> score;

    std::cout << "Enter your attendance (0-100): ";
    int attendance{};
    std::cin >> attendance;

    // Gabungkan logika sesuai aturan soal
    // (A AND B) OR C
    const bool isPassed{ (score >= 70 && attendance >= 80) || (score >= 90) };

    // Gunakan Conditional Operator untuk menentukan status
    const std::string_view status{ isPassed ? "Lulus" : "Gagal" };

    std::cout << "Status: " << status << '\n';

    // Bonus Point Logic
    if (isPassed && attendance == 100)
    {
        std::cout << "Bonus Point!\n";
    }

    return 0;
}