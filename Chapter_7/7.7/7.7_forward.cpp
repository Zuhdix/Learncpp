void sayHi(); // forward declaration for function sayHi, makes sayHi accessible in this file

// tidak butuh iostream karena sudah ada di 7.7_a.cpp
int main()
{
    sayHi(); // call to function defined in another file, linker will connect this call to the function definition

    return 0;
}