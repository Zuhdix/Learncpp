class Box {
    std::string m_label{};
public:
    Box(std::string_view label) : m_label{ label } {}
    const std::string& getLabel() const & { return m_label; }
    std::string getLabel() const && { return m_label; } // tambahkan ini
};

Box makeBox(std::string_view label) { return Box{ label }; }

int main() {
    // A: aman karena reference const lvalue
    Box b{ "gift" };
    std::cout << b.getLabel() << '\n';

    // B: UB karena reference const di keep di makeBox yang rvalue
    const std::string& ref{ makeBox("surprise").getLabel() };
    std::cout << ref << '\n';

    return 0;
}