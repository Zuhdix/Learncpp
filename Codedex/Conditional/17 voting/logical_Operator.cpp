#include <iostream>

int main () {

    std::cout << "Enter your age: ";
    int age {};
    std::cin >> age;

    std::cout << "are you a citizen ( 1 = yes or 0 = no ): ";
    bool citizen {};
    std::cin >> citizen;

    std::cout << "Have you register ( 1 = yes or 0 = no ): ";
    bool registered {};
    std::cin >> registered;


    if (age >= 18 && citizen && registered) {
        std::cout << "You can vote!. \n";
    }
    else if (age < 18) {
        std::cout << "You are not old enough to vote. \n";
    }
    else if (citizen == false) {
        std::cout << "You are not eligible to vote. \n";
    }
    else if (registered == false) {
        std::cout << "You must registered first. \n";
    }
    else {
        std::cout << "cannot meet the requirement. \n";
    }
    
    return 0;
}
