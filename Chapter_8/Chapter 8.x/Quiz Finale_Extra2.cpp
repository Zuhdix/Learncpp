#undef NDEBUG
#include <cassert> // Wajib untuk fungsi assert()
#include <iostream>

// --- FUNGSI DETEKTOR BILANGAN PRIMA (GOD-TIER OPTIMIZATION) ---
bool isPrime(int x)
{
    // 1. GUARD CLAUSE (Hukum Dasar)
    // Bilangan prima itu dimulai dari 2. 
    // Jadi, angka negatif, 0, dan 1 langsung kita tendang.
    if (x <= 1)
        return false;

    // 2. THE CHOSEN ONE (Pengecualian)
    // Angka 2 adalah SATU-SATUNYA bilangan genap di dunia yang merupakan bilangan prima.
    // Kita harus amankan dia dulu biar nggak ikut kebuang di langkah selanjutnya.
    if (x == 2)
        return true;

    // 3. PEMBANTAIAN MASSAL (Buang Angka Genap)
    // Kalau angka itu bisa dibagi 2 (genap) dan dia bukan angka 2, PASTI BUKAN PRIMA.
    // Ini menghemat kerja CPU sebanyak 50% karena kita nggak perlu ngecek angka genap lagi!
    if (x % 2 == 0)
        return false;

    // 4. THE GOD-TIER LOOP (Hanya mengecek angka ganjil sampai titik Akar Kuadrat)
    // - Mulai dari 3: Karena 1 dan 2 udah diurus di atas.
    // - count * count <= x: Ini trik jenius pengganti std::sqrt(x).
    //   (Jika angka tidak punya pembagi sampai titik akar kuadratnya, dia PASTI prima).
    // - count += 2: Kita lompat 2 langkah (3, 5, 7, 9...) karena ngecek angka genap itu buang waktu.
    for (int count{ 3 }; count * count <= x; count += 2)
    {
        // Jika angka 'x' habis dibagi oleh angka ganjil 'count' (sisanya 0)
        // Berarti dia punya pembagi lain selain 1 dan dirinya sendiri. BUKAN PRIMA.
        if (x % count == 0)
            return false;
    }

    // 5. THE SURVIVOR
    // Jika angka 'x' berhasil melewati semua rintangan di atas tanpa memicu 'return false',
    // maka sudah dipastikan 100% bahwa angka tersebut adalah BILANGAN PRIMA.
    return true;
}

int main()
{
    // assert() bertugas meledakkan program jika nilai di dalamnya FALSE.
    // Tanda '!' (NOT) dipakai untuk membalikkan hasil. 
    // Contoh: 0 bukan prima (false). !false = true. Program aman.
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9)); // 9 bukan prima, !false = true. Aman.
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417)); // Tes dengan bilangan prima yang lumayan besar

    // Jika kode tidak crash dan berhasil sampai sini, berarti logika isPrime() SEMPURNA!
    std::cout << "Success!\n";

    return 0;
}