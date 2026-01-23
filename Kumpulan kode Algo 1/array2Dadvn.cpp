#include <iostream>
#include <array> // Wajib untuk std::array

int main() {
   // Gunakan const karena data tidak berubah
   // std::array memberikan keamanan tipe dan tidak mudah decay jadi pointer liar
   const std::array<std::array<int, 3>, 3> matrix{ {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
   } };

   for (std::size_t row{ 0 }; row < matrix.size(); ++row) {
       for (std::size_t col{ 0 }; col < matrix[row].size(); ++col) {
           // Akses dua dimensi: [baris][kolom]
           std::cout << "Elemen [" << row << "][" << col << "]: " << matrix[row][col] << '\n';
       }
   }

   // Cara akses langsung elemen 1,1
   std::cout << "\nTarget 1,1 adalah: " << matrix[1][1] << '\n';

   return 0;
}
