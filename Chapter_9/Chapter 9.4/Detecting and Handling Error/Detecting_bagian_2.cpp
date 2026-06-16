// The reciprocal of x is 1/x
double reciprocal(double x)
{
    return 1.0 / x;
}

// The reciprocal of x is 1/x, returns 0.0 if x=0
constexpr double error_no_reciprocal{ 0.0 }; // could also be placed in namespace

double reciprocal(double x)
{
    if (x == 0.0)
        return error_no_reciprocal; // nilai ini disebut sentinel value

    return 1.0 / x;
}

// Fatal errror contoh (bisa digunakan jika fungsinya bersarang dalam)
// bisa pake exceptions tapi di bab 27

double doIntDivision(int x, int y)
{
    if (y == 0)
    {
        std::cout << "Error: Could not divide by zero\n";
        std::exit(1);
    }
    return x / y;
}