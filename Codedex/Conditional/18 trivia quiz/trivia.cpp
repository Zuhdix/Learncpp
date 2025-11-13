#include <iostream>
#include <string> // <-- 1. SERTAKAN HEADER INI

int main () {
    // Skor (untuk bonus)
    int score = 0;

    // --- Q1 ---
    int q1 {};
    std::cout << "Q1) What is the name of the world's longest river? 💧 \n \n";
    std::cout << "1) Missouri River \n2) Nile \n3) Amazon River \n4) Yangtze River \n";
    std::cout << "Your answer is ( number ): ";
    std::cin >> q1;

    if (q1 == 2) {
        std::cout << "You got it correct! \n";
        score++; // Tambah skor
    }
    else {
        std::cout << "Sorry you incorrect ;) \n";
    }

    // --- Q2 ---
    int q2 {};
    std::cout << "\n\nQ2) How many bones are in the human body? 🦴 \n \n";
    std::cout << "1) 92 \n2) 150 \n3) 206 \n4) 10 \n";
    std::cout << "Your answer is ( number ): ";
    std::cin >> q2;

    if (q2 == 3) {
        std::cout << "You got it correct! \n";
        score++; // Tambah skor
    }
    else {
        std::cout << "Sorry you incorrect ;) \n";
    }

    // --- Q3 (STRING) ---
    std::string q3; // <-- 2. DEKLARASIKAN VARIABEL STRING

    std::cout << "\n\nQ3) What food never spoils? 😷 \n \n";
    std::cout << "Type your answer: ";
    std::cin >> q3; // <-- 3. AMBIL INPUT STRING

    // 4. BANDINGKAN STRING DENGAN "=="
    // Jawaban yang benar adalah "Honey" (Madu)
    if (q3 == "Honey") {
        std::cout << "You got it correct! \n";
        score++; // Tambah skor
    }
    else {
        std::cout << "Sorry you incorrect ;) The answer is Honey.\n";
    }

    // --- Tampilkan Skor Akhir ---
    std::cout << "\n\n--- Your Final Score ---\n";
    std::cout << "You got " << score << " out of 3 correct.\n";

    return 0;
}
