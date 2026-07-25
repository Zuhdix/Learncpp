int x{ 5 };

int* p1{ &x }; // bisa semuanya
const int* p2{ &x }; // bisa ubah alamat doang
int* const p3{ &x }; // bisa ubah nilai doang
const int* const p4{ &x }; // gak bisa dua duanya
