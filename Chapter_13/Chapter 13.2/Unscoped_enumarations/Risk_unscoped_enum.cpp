enum Color
{
    red,
    green,
    blue, // blue is put into the global namespace
};

enum Feeling
{
    happy,
    tired,
    blue, // error: naming collision with the above blue
};

int main()
{
    Color apple{ red }; // my apple is red
    Feeling me{ happy }; // I'm happy right now (even though my program doesn't compile)

    return 0;
}

// ini masuknya benefit tapi nyambung sama atas materinya 
enum Color
{
    red,
    green,
    blue, // blue is put into the global namespace
};

int main()
{
    Color apple{ red }; // okay, accessing enumerator from global namespace
    Color raspberry{ Color::red }; // also okay, accessing enumerator from scope of Color

    return 0;
}