#include<iostream>

// ❌ CARA 1: Hardcode Variabel
// Sangat repetitif, susah dijumlahkan, dan rawan typo.
int score1{ 85 };
int score2{ 92 };
int score3{ 78 };
// ... sampai score30

// Kalau mau cari rata-rata, harus manual:
// int avg = (score1 + score2 + score3 + ... + score30) / 30; // 😱 Mengerikan

// ❌ CARA 2: Struct (Sedikit lebih terorganisir, tapi masalah inti tetap ada)
struct TestScores {
    int score1{};
    int score2{};
    int score3{};
    // Tiap elemen masih PUNYA NAMA.
    // Tetap harus dipanggil manual: obj.score1 + obj.score2...
};

// ✅ CARA 3 (Masa Depan): std::vector (Container)
// (Kita akan pelajari syntax ini di chapter berikutnya)
#include<vector>
#include<numeric>

int main() {
    // Wadahnya bernama 'scores', isinya tidak bernama.
    std::vector<int> scores{ 85, 92, 78, 90, 88 };

    // Bisa diproses dengan algoritma tanpa peduli seberapa banyak isinya!
    // Tidak perlu panggil score1, score2, dst.
    std::cout << "Jumlah elemen: " << scores.size() << '\n';

    return 0;
}