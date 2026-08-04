// This function is declared as static, and can now be used only within this file
// Attempts to access it from another file via a function forward declaration will fail
[[maybe_unused]] static int add(int x, int y) // static default ex maka static wajib biar internal
{
    return x + y;
}