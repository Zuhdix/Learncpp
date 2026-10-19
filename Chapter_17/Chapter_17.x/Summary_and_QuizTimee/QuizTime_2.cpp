#include "Random.h"      // Header buatan sendiri, dipakai untuk Random::get() (generate angka acak)
#include <iostream>      // std::cout, std::cin
#include <array>         // std::array
#include <string_view>   // std::string_view dan literal "..."sv
#include <string>        // std::string
#include <limits>        // std::numeric_limits (dipakai buat ignoreLine)

// Namespace buat nyimpen semua data terkait potion.
// Data dipisah jadi beberapa array paralel yang di-index pakai enum Type.
namespace Potion
{
    // Daftar jenis potion. Nilai enum otomatis jadi index: healing=0, mana=1, dst.
    // max_potion selalu di posisi terakhir, jadi nilainya = jumlah potion (4)
    // dan dipakai sebagai ukuran array / batas validasi input.
    enum Type
    {
        healing,
        mana,
        speed,
        invisibility,
        max_potion,
    };

    // Harga tiap potion (gold), urutannya harus sama dengan enum Type.
    constexpr std::array costs{ 20, 30, 12, 50 };
    // Cek saat compile: kalau jumlah harga != jumlah potion, program gagal di-compile.
    static_assert(std::size(costs) == max_potion, "potion cost kurang/lebih");

    // Biar bisa pakai literal "..."sv (string_view) tanpa nulis std::literals::...
    using namespace std::string_view_literals;

    // Nama tiap potion, urutannya juga harus sama dengan enum Type.
    constexpr std::array names{ "healing"sv, "mana"sv, "speed"sv, "invisibility"sv };
    static_assert(std::size(names) == max_potion, "potion name kurang/lebih");

    // Array berisi semua Type, dipakai supaya bisa loop pakai range-based for
    // (enum biasa nggak bisa di-iterate langsung).
    constexpr std::array types{ healing, mana, speed, invisibility };
    static_assert(std::size(types) == max_potion, "types error");
}

// Nampilin daftar potion yang dijual beserta nomor dan harganya.
// Format output: "<nomor>) <nama> costs <harga>"
void shop()
{
    std::cout << "Here is our selection for today: \n";
    for (auto p : Potion::types)
    {
        std::cout << p << ") " << Potion::names[p] << " costs " << Potion::costs[p];
        std::cout << '\n';
    }
}

// Menyimpan data pemain.
struct Player
{
    std::string playerName{};                       // Nama pemain
    std::array<int, Potion::max_potion> inventory{}; // Jumlah tiap potion yang dimiliki (index = Potion::Type), awalnya 0 semua
    int gold{};                                     // Gold yang dimiliki pemain
};

// Nampilin sapaan dan jumlah gold pemain.
// Parameter diambil by const reference supaya nggak dicopy dan nggak bisa diubah.
void statsPlayer(const Player& data)
{
    std::cout << "Hello, " << data.playerName << ", you have " << data.gold << " gold.\n\n";
}

// Membuang semua sisa karakter di buffer input sampai ketemu newline.
// Dipakai setelah input yang salah supaya nggak kebaca di iterasi berikutnya.
void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Ngecek apakah masih ada karakter "sisa" di buffer setelah ekstraksi.
// Contoh: user ngetik "2abc", maka 2 terbaca tapi "abc" masih nyangkut.
// Return true kalau belum EOF dan karakter berikutnya bukan newline.
bool hasUnextractedInput()
{
    return !std::cin.eof() && std::cin.peek() != '\n';
}

// Minta input nomor potion dari user dan validasi sampai valid.
// Return:
//   0 .. max_potion-1 -> nomor potion yang valid
//   -1                -> user ngetik 'q' (mau keluar)
int getPotion()
{
    std::cout << "Enter the number of the potion you'd like to buy, or 'q' to quit: ";

    // Terus ngulang sampai input valid atau user quit
    while (true)
    {
        int potionBuyed{};
        std::cin >> potionBuyed;

        // Kasus 1: input bukan angka (ekstraksi ke int gagal)
        if (!std::cin)
        {
            std::cin.clear();       // Reset error state supaya cin bisa dipakai lagi
            char ch{};
            std::cin >> ch;         // Baca satu karakter buat ngecek apakah itu 'q'
            if (ch == 'q')
                return -1;          // Sinyal untuk keluar dari shop
            ignoreLine();           // Buang sisa input yang salah
            std::cout << "That is an invalid input. Try again: ";
            continue;
        }

        // Kasus 2: angka valid tapi ada sisa karakter (misal "2abc" atau "2 3")
        if (hasUnextractedInput())
        {
            ignoreLine();
            std::cout << "That is an invalid input. Try again: ";
            continue;
        }

        // Kasus 3: angka di luar range potion yang tersedia
        if (potionBuyed < 0 || potionBuyed >= Potion::max_potion)
        {
            ignoreLine();
            std::cout << "That is an invalid input. Try again: ";
            continue;
        }

        // Input valid
        return potionBuyed;
    }
}

// Nampilin isi inventory pemain di akhir program.
// Cuma potion yang jumlahnya > 0 yang ditampilin, plus sisa gold.
void printInventory(const Player& playerData)
{
    std::cout << "Your inventory contains: \n";
    for (auto p : Potion::types)
    {
        if (playerData.inventory[p] > 0)
        {
            std::cout << playerData.inventory[p] << "x potion of " << Potion::names[p] << '\n';
        }
    }
    std::cout << "You escaped with " << playerData.gold << " gold remaining.\n";
}

int main()
{
    std::cout << "Welcome to Roscoe's potion emporium!\n";

    // Ambil nama pemain. std::ws buang whitespace di depan,
    // getline dipakai supaya nama yang ada spasinya tetap kebaca utuh.
    std::cout << "Enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    // Inisialisasi pemain: nama dari input, gold acak antara 80 sampai 120
    Player playerOne{};
    int goldGenerator{ Random::get(80, 120) };
    playerOne.playerName = name;
    playerOne.gold = goldGenerator;

    statsPlayer(playerOne);

    // Loop utama shop: berjalan terus sampai user memilih quit
    while (true)
    {
        shop();                     // Tampilkan daftar potion
        int choice{ getPotion() };  // Minta pilihan user (sudah tervalidasi)

        if (choice == -1)           // User ngetik 'q' -> keluar dari loop
            break;

        // Konversi ke std::size_t karena dipakai sebagai index array
        // (menghindari warning sign-conversion)
        auto potionIndex{ static_cast<std::size_t>(choice) };

        if (playerOne.gold >= Potion::costs[potionIndex])
        {
            // Gold cukup: kurangi gold dan tambah 1 potion ke inventory
            playerOne.gold -= Potion::costs[potionIndex];
            ++playerOne.inventory[potionIndex];
            std::cout << "You purchased a potion of " << Potion::names[potionIndex];
            std::cout << ". You have " << playerOne.gold << " gold left.\n\n";
            continue;
        }
        else
        {
            // Gold nggak cukup: pembelian ditolak
            std::cout << "You can not afford that.\n\n";
            continue;
        }
    }

    // Setelah keluar dari shop, tampilkan ringkasan inventory
    std::cout << '\n';
    printInventory(playerOne);
    std::cout << "Thanks for shopping at Roscoe's potion emporium!\n";
    return 0;
}