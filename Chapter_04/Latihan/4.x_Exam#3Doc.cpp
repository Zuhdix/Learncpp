/*
 * Program: Simulasi Bola Jatuh
 * Tujuan: Menghitung dan menampilkan ketinggian bola yang dijatuhkan dari
 * menara pada detik ke-0 hingga ke-5.
 * Penulis: (Nama Anda)
 * Tanggal: (Tanggal Hari Ini)
 */

// Menyertakan library iostream untuk fungsionalitas input (std::cin)
// dan output (std::cout) ke konsol.
#include <iostream>

/*
 * Fungsi: getDouble
 * -------------------
 * Meminta pengguna untuk memasukkan ketinggian menara dalam meter.
 *
 * returns: (double) Ketinggian menara yang dimasukkan oleh pengguna.
 */
double getDouble()
{
    std::cout << "Enter the height of the tower: "; // Meminta input
    double x{};                                    // Deklarasi variabel untuk menyimpan tinggi
    std::cin >> x;                                 // Membaca input dari keyboard ke variabel x
    return x;                                      // Mengembalikan nilai tinggi
}

/*
 * Fungsi: calculateDistanceFallen
 * -------------------
 * Menghitung jarak jatuh bola (diukur dari puncak menara) setelah
 * sejumlah detik tertentu.
 * Menggunakan rumus fisika: jarak = (gravitasi * detik^2) / 2
 *
 * parameter sec: (int) Jumlah detik yang telah berlalu.
 * returns: (double) Total jarak yang telah ditempuh bola dalam meter.
 */
double calculateDistanceFallen(int sec)
{
    // Konstanta gravitasi bumi (m/s^2)
    const double gravity{9.8};

    // Hitung jarak jatuh.
    // (sec * sec) digunakan sebagai pengganti pangkat dua (sec^2).
    // Kita gunakan 2.0 (double literal) sesuai petunjuk soal agar
    // hasil pembagian pasti bertipe double.
    const double distance{(gravity * sec * sec) / 2.0};

    return distance;
}

/*
 * Fungsi: printHeight
 * -------------------
 * Menampilkan status ketinggian bola pada detik tertentu.
 * Fungsi ini akan otomatis mencetak "on the ground" jika
 * ketinggian bola 0 atau negatif (sudah menyentuh tanah).
 *
 * parameter seconds: (int) Detik ke-berapa yang sedang dilaporkan.
 * parameter currentHeight: (double) Ketinggian bola saat ini di atas tanah.
 * returns: void (tidak mengembalikan nilai, hanya mencetak ke layar).
 */
void printHeight(int seconds, double currentHeight)
{
    // Cek dulu apakah bola masih di atas tanah (ketinggian > 0)
    if (currentHeight > 0.0)
    {
        std::cout << "At " << seconds << " seconds, the ball is at height: " << currentHeight << " meters\n";
    }
    // Jika tidak (ketinggian 0 atau negatif), berarti bola sudah di tanah
    else
    {
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
    }
}

/*
 * Fungsi: main
 * -------------------
 * Titik masuk utama program.
 * Mengatur alur eksekusi:
 * 1. Mendapatkan tinggi menara awal.
 * 2. Menghitung dan mencetak ketinggian bola untuk detik 0.
 * 3. Menghitung dan mencetak ketinggian bola untuk detik 1.
 * 4. ...dan seterusnya hingga detik 5.
 */
int main()
{
    // 1. Dapatkan tinggi menara awal dari pengguna.
    // Kita gunakan 'const' karena nilai ini tidak akan berubah selama program berjalan.
    const double initialHeight{getDouble()};

    // Memberi satu baris spasi agar output hasil lebih rapi
    std::cout << '\n';

    // --- Menghitung dan mencetak status bola untuk setiap detik ---
    // Karena kita belum belajar 'loop', kita lakukan secara manual
    // dengan pola: Hitung jarak -> Hitung ketinggian -> Cetak.

    // --- Detik 0 ---
    double distanceFallen{calculateDistanceFallen(0)};   // Hitung jarak jatuh pada detik 0
    double currentHeight{initialHeight - distanceFallen}; // Hitung sisa ketinggian
    printHeight(0, currentHeight);                        // Cetak hasil

    // --- Detik 1 ---
    distanceFallen = calculateDistanceFallen(1); // Gunakan ulang variabel yg sama
    currentHeight = initialHeight - distanceFallen;
    printHeight(1, currentHeight);

    // --- Detik 2 ---
    distanceFallen = calculateDistanceFallen(2);
    currentHeight = initialHeight - distanceFallen;
    printHeight(2, currentHeight);

    // --- Detik 3 ---
    distanceFallen = calculateDistanceFallen(3);
    currentHeight = initialHeight - distanceFallen;
    printHeight(3, currentHeight);

    // --- Detik 4 ---
    distanceFallen = calculateDistanceFallen(4);
    currentHeight = initialHeight - distanceFallen;
    printHeight(4, currentHeight);

    // --- Detik 5 ---
    distanceFallen = calculateDistanceFallen(5);
    currentHeight = initialHeight - distanceFallen;
    printHeight(5, currentHeight);

    // Menandakan program selesai dengan sukses
    return 0;
}
