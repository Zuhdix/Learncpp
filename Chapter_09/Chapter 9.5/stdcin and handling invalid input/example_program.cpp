// Consider the following calculator program that has no error handling (tadinya tanpa handling)


#include <iostream>
#include <limits>

// case 2 validasi (Extraction succeeds but with extraneous input)
// ada tips tambahan baca ulang baiknya, contoh kode di example_program2.cpp
void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

/*      ini masuk case 3        */  
// returns true if extraction failed, false otherwise
bool clearFailedExtraction()
{
    // Check for failed extraction
    if (!std::cin) // If the previous extraction failed
    {
        if (std::cin.eof()) // If the user entered an EOF
        {
            std::exit(0); // Shut down the program now
        }

        // Let's handle the failure
        std::cin.clear(); // Put us back in 'normal' operation mode
        ignoreLine();     // And remove the bad input

        return true;
    }

    return false;
}

double getDouble()
{
    while (true)
    {
        std::cout << "Enter a decimal number: ";
        double x{};
        std::cin >> x;

        // validasi input kasus 3 
        if (!std::cin) // jika extraksi terakhir gagal
        {
            // lakukan handling error
            std::cin.clear(); // kembali ke normal operation mode
            ignoreLine();     // hapus input sampah
            continue;
        }
        // jika sukses langsung tembus disini
        ignoreLine(); // case 2 taru disini, singkatnya mengabaikan buffer \n.
        return x;
    }
}

/* char getOperator()
{
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char op{};
    std::cin >> op;
    return op;
} */

// versi validasi (case 1 baca dokumentasi)
char getOperator()
{
    while (true) // loop sampe user masukin input valid
    {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char operation{};
        std::cin >> operation;

        // cek apakah user memasukkan input ber makna (valid)
        switch (operation)
        {
        case '+':
        case '-':
        case '*':
        case '/':
            return operation; // ke caller
        default:
            std::cout << "Input gak valid, ulang lagi yang bener tot. \n";
        }
    }
}

void printResult(double x, char operation, double y)
{
    std::cout << x << ' ' << operation << ' ' << y << " is ";

    switch (operation)
    {
    case '+':
        std::cout << x + y << '\n';
        return;
    case '-':
        std::cout << x - y << '\n';
        return;
    case '*':
        std::cout << x * y << '\n';
        return;
    case '/':
        std::cout << x / y << '\n';
        return;
    }
}

int main()
{
    double x{ getDouble() };
    char operation{ getOperator() };
    double y{ getDouble() };

    printResult(x, operation, y);

    return 0;
}