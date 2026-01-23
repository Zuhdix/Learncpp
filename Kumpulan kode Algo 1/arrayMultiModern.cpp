//#include <iostream>
//#include <array>
//
//int main() {
//    // 1. Gunakan constexpr untuk dimensi (No Magic Numbers)
//    constexpr int layers{ 2 };
//    constexpr int rows{ 2 };
//    constexpr int cols{ 2 };
//
//    // 2. Gunakan std::array dan const (Memory Safe & RAII)
//    const std::array<std::array<std::array<int, cols>, rows>, layers> cube{ {
//        {{ {{1, 2}}, {{3, 4}} }},
//        {{ {{5, 6}}, {{7, 8}} }}
//    } };
//
//    // 3. Gunakan Range-based for loop (Lebih aman dari off-by-one error)
//    for (const auto& layer : cube) {
//        for (const auto& row : layer) {
//            for (int element : row) {
//                std::cout << element << ' ';
//            }
//            std::cout << '\n';
//        }
//        std::cout << '\n';
//    }
//
//    return 0;
//}