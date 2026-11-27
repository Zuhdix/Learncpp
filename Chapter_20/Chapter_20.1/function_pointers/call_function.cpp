int foo(int x)
{
    return x;
}

int main()
{
    int (*fcnPtr)(int) { &foo }; // Initialize fcnPtr with function foo

    // ekplisit call
    (*fcnPtr)(5); // call function foo(5) through fcnPtr.

    // implicit call
    fcnPtr(5);
    return 0;
}