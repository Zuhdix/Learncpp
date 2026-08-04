#include <iostream> // Diperlukan untuk std::cout (cetak) dan std::cin (input)

/*
 * LOGIKA: Fungsi utilitas (pembantu)
 * Tujuan: Hanya bertanggung jawab untuk meminta input tinggi menara dari user.
 * Mengisolasi "tugas bertanya" dari logika lainnya.
 * * returns: (double) Ketinggian menara yang dimasukkan user.
 */
double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}

/*
 * LOGIKA: Fungsi Kalkulasi (Inti)
 * Tujuan: Menghitung ketinggian bola *setelah* jatuh selama 'seconds' detik.
 * Fungsi ini berisi "aturan bisnis" dari program.
 *
 * parameter towerHeight: (double) Ketinggian awal menara.
 * parameter seconds: (int) Detik ke-berapa yang ingin dihitung.
 * returns: (double) Ketinggian bola yang SUDAH divalidasi (tidak mungkin negatif).
 */
double calculateBallHeight(double towerHeight, int seconds)
{
    // Konstanta fisika
    double gravity { 9.8 };

    // Menghitung JARAK JATUH (diukur dari puncak)
    // Rumus: jarak = (gravitasi * waktu^2) / 2.0
    double fallDistance { gravity * (seconds * seconds) / 2.0 };
    
    // Menghitung KETINGGIAN SAAT INI (diukur dari tanah)
    // Logika: Ketinggian Sisa = Tinggi Awal - Jarak Jatuh
    double ballHeight { towerHeight - fallDistance };

    // LOGIKA UTAMA (Aturan Bisnis):
    // Jika perhitungan menghasilkan angka negatif (bola menembus tanah),
    // kita secara logis "memaksa" ketinggiannya menjadi 0.0 (di tanah).
    if (ballHeight < 0.0)
        return 0.0; // Kembalikan 0.0, bukan nilai negatif

    // Jika bola masih di udara (ballHeight >= 0.0), kembalikan ketinggiannya
    return ballHeight;
}

/*
 * LOGIKA: Fungsi Presentasi (Tampilan)
 * Tujuan: Hanya bertanggung jawab untuk MENAMPILKAN hasil ke layar.
 * Fungsi ini "bodoh", ia tidak melakukan kalkulasi.
 * Ia hanya menerima hasil yang sudah jadi dan mencetaknya.
 *
 * parameter ballHeight: (double) Ketinggian bola yang sudah final (dari calculateBallHeight).
 * parameter seconds: (int) Detik ke-berapa yang sedang dilaporkan.
 */
void printBallHeight(double ballHeight, int seconds)
{
    // LOGIKA TAMPILAN:
    // Cek apakah ketinggiannya lebih dari 0.
    if (ballHeight > 0.0)
        // Jika ya, cetak ketinggiannya
        std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
    else
        // Jika tidak (artinya 0.0), cetak pesan "on the ground"
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

/*
 * LOGIKA: Fungsi Helper (Penggabung)
 * Tujuan: Ini adalah fungsi yang membuat `main` jadi bersih.
 * Fungsi ini meng-abstraksi (menyembunyikan) DUA langkah menjadi SATU:
 * 1. Menghitung ketinggian
 * 2. Mencetak ketinggian
 * Ini adalah inti dari prinsip DRY (Don't Repeat Yourself) di kode ini.
 *
 * parameter towerHeight: (double) Diteruskan ke fungsi kalkulasi.
 * parameter seconds: (int) Diteruskan ke fungsi kalkulasi dan print.
 */
void calculateAndPrintBallHeight(double towerHeight, int seconds)
{
    // Langkah 1: Panggil fungsi kalkulasi untuk mendapatkan ketinggian yang valid
    double ballHeight{ calculateBallHeight(towerHeight, seconds) };
    
    // Langkah 2: Berikan hasil kalkulasi itu ke fungsi print untuk ditampilkan
    printBallHeight(ballHeight, seconds);
}

/*
 * LOGIKA: Fungsi Main (Orkestrator)
 * Tujuan: Mengatur alur program tingkat tinggi.
 */
int main()
{
    // Langkah 1: Dapatkan tinggi menara (HANYA SEKALI)
    const double towerHeight{ getTowerHeight() }; // Dibuat const karena tidak akan berubah

    // Langkah 2: Panggil fungsi "helper" berulang kali untuk setiap detik.
    // `main` tidak perlu tahu *bagaimana* cara menghitung atau mencetak.
    // `main` hanya perlu bilang: "Tolong hitung dan cetak untuk detik 0", dst.
    calculateAndPrintBallHeight(towerHeight, 0);
    calculateAndPrintBallHeight(towerHeight, 1);
    calculateAndPrintBallHeight(towerHeight, 2);
    calculateAndPrintBallHeight(towerHeight, 3);
    calculateAndPrintBallHeight(towerHeight, 4);
    calculateAndPrintBallHeight(towerHeight, 5);

    return 0; // Program selesai
}
