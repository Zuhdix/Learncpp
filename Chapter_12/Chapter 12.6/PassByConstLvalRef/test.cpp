// lebih optimal biasa
void print(int x) { std::cout << x; }

// jika string yang dimaksud std::string maka optimal
void print(const std::string& s) { std::cout << s; }

// lebih optimal menggunakan tipe biasa
void swap(int a, int b) { int tmp = a; a = b; b = tmp; }

// karena nama player kadang random dan ada angkanya saya pilih string_view
void showName(std::string_view name) { std::cout << name; }

// optimal
void resetHealth(const Player& p) { p.health = 100; }