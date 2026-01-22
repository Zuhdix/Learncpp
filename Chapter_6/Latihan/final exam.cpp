Deskripsi Soal:
Buatlah program yang menentukan status kelulusan siswa berdasarkan skor dan kehadiran.
Aturan Logika:
    Input: Dua integer, score (0-100) dan attendance (persentase kehadiran 0-100).
    Siswa dinyatakan Lulus jika:
        Skor minimal 70 DAN kehadiran minimal 80%.
        ATAU Skor minimal 90 (tanpa peduli kehadiran).

    Gunakan Conditional Operator (?:) untuk menentukan string status: "Lulus" atau "Gagal".

    Bonus: Jika Lulus DAN kehadiran 100%, tampilkan pesan tambahan "Bonus Point!".

Aturan Penulisan (Sentinel Standard):
    Dilarang using namespace std;.
    Gunakan const untuk semua variabel input.
    Gunakan '\n', bukan std::endl.
    Beri tanda kurung pada ekspresi logika yang kompleks agar jelas urutan eksekusinya (precedence).


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
