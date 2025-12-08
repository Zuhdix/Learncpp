#include <iostream>

// [[nodiscard]] memicu warning jika return value diabaikan (seperti contoh buruk Codédex)
[[nodiscard]] double celsius_to_fahrenheit(double celsius) {
    // Gunakan literal float (9.0, 5.0) untuk mencegah kecelakaan integer division
    return (celsius * 9.0 / 5.0) + 32.0;
}

[[nodiscard]] double miles_to_kilometers(double miles) {
    constexpr double km_per_mile { 1.60934 };
    return miles * km_per_mile;
}

[[nodiscard]] double usd_to_jpy(double usd) {
    // Rate berubah-ubah; di aplikasi nyata ini dari API
    constexpr double jpy_per_usd { 155.55 }; 
    return usd * jpy_per_usd;
}

[[nodiscard]] double bpm_to_seconds_per_beat(double bpm) {
    // Hindari pembagian dengan nol (division by zero)
    if (bpm == 0.0) return 0.0; 
    return 60.0 / bpm;
}

int main() {
    std::cout << "Masukkan angka untuk konversi: ";
    double input {};
    std::cin >> input;

    // Semantic fix: Secara konsep aneh mengonversi "100" ke semuanya sekaligus,
    // tapi untuk testing mekanisme fungsi, struktur ini bisa diterima.

    std::cout << input << " C = " << celsius_to_fahrenheit(input) << " F\n";
    std::cout << input << " Miles = " << miles_to_kilometers(input) << " KM\n";
    std::cout << "$" << input << " USD = " << usd_to_jpy(input) << " JPY\n";
    
    // Note: Logika BPM bekerja dua arah (60/x)
    std::cout << input << " BPM = " << bpm_to_seconds_per_beat(input) << " seconds/beat\n";

    return 0;
}
