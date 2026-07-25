// [A]
int add(int x, int y) { return x + y; }
// ini pure function jadi aman constexpr atau consteval jika argumen constexpr

// [B]
int getInput() { std::cin >> x; return x; }
// ada side effect, gak aman

// [C]
int rollDice() { return rand() % 6 + 1; }
// side effect juga

// [D]
int clamp(int val, int lo, int hi)
{
    return (val < lo) ? lo : (val > hi) ? hi : val;
}
// aman constexpr dan juga consteval (tapi prefer constexpr biar fleksibel)


// [E]
int logAndReturn(int x)
{
    std::cout << "Called with: " << x << '\n';
    return x;
}
// gak aman, ada cout nya (i/o)