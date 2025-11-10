#include<iostream>

double getDouble()
{
    std::cout << "Enter the height of the tower: ";
    double x{};
    std::cin >> x;
    return x;
}

double calculateDistanceFallen(int sec)
{
    double x{9.8};
    const double grav{ x * sec * sec / 2};
    return grav;
}

void printHeight(int seconds, double currentHeight)
{
    if (currentHeight == 0)
        std::cout << "At -" << seconds << " seconds, the ball is at height: " << currentHeight << '\n';
    else if (currentHeight > 0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << currentHeight << '\n';
    else {
        std::cout << "At " << seconds << " seconds, the ball is on the ground.";
    }
}

int main()
{
    double initialHeight {getDouble()};
    double distance0 {calculateDistanceFallen(0)};
    double height0 {initialHeight - distance0};


    double distance1 {calculateDistanceFallen(1)};
    double height1 {initialHeight - distance1};

    double distance2 {calculateDistanceFallen(2)};
    double height2 {initialHeight - distance2};

    double distance3 {calculateDistanceFallen(3)};
    double height3 {initialHeight - distance3};

    double distance4 {calculateDistanceFallen(4)};
    double height4 {initialHeight - distance4};

    double distance5 {calculateDistanceFallen(5)};
    double height5 {initialHeight - distance5};

    printHeight(0, height0);
    printHeight(1, height1);
    printHeight(2, height2);
    printHeight(3, height3);
    printHeight(4, height4);
    printHeight(5, height5);

    return 0;
}
