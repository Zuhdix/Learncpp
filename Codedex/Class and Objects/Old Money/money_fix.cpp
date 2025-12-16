#include <iostream>
#include <string>

class WealthyFamily {
private:
    // Gunakan long long agar muat angka triliunan (sampai 9 quintillion)
    long long net_worth{}; 

public:
    std::string family_name{};

    // Constructor: Menggunakan Member Initializer List (Best Practice)
    WealthyFamily(long long starting_wealth) 
        : net_worth{starting_wealth} 
    {
    }

    // Getter: Wajib pakai 'const' karena fungsi ini tidak mengubah data
    // [[nodiscard]] mengingatkan caller agar return valuenya tidak dicuekin
    [[nodiscard]] long long get_net_worth() const {
        return net_worth;
    }

    // Setter: Di sini kita bisa tambah validasi (misal: gak boleh negatif)
    void set_net_worth(long long amount) {
        if (amount < 0) {
            std::cout << "Error: Wealth cannot be negative!\n";
            return;
        }
        net_worth = amount;
    }
};

int main() {
    // OLD MONEY
    WealthyFamily old_money{1000000000}; // 1 Milyar
    old_money.family_name = "The Rockefellers";

    // Kita akses nama (public) tapi tidak akses uang (private) secara langsung
    std::cout << old_money.family_name << ":\n";
    std::cout << "We prefer not to discuss such matters.\n\n";

    // NEW MONEY
    WealthyFamily new_money{2750000000}; // 2.75 Milyar
    new_money.family_name = "The Kardashians";

    std::cout << new_money.family_name << ":\n";
    // Menggunakan Getter untuk mengambil nilai private
    std::cout << "We are worth $" << new_money.get_net_worth() << "!\n";

    return 0;
}
