#include <iostream>
#include <string>

void ooo_message(int month, int date) {
    std::cout << "I am currently out of the office and will be back at " << month << "/"<< date << ". \n";
    std::cout << "I'll respond as soon as I can upon my return. \n";
}

int main() {
    ooo_message(4, 28);

    return 0;
}
