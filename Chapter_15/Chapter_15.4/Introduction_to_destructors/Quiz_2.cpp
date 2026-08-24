// C++20
// Compile: g++ -std=c++20 -Wall -Wextra -Werror -pedantic tempfile.cpp

#include<iostream>
#include<string>
#include<string_view>

class TempFile {
private:
    std::string m_filename{};

public:
    //TODO: Constructor — terima filename, cetak "Opening temp file: [filename]"
    TempFile(std::string_view fileName) : m_filename{fileName}
    {std::cout << "Opening temp file: " << m_filename << '\n'; }

    //TODO: Destructor — cetak "Deleting temp file: [filename]"
    ~TempFile() { std::cout << "Deleting temp file: " << m_filename << "\n"; }
    void write(std::string_view data) const {
        std::cout << "Writing to " << m_filename << ": " << data << '\n';
    }
};

bool process(bool earlyExit) {
    TempFile tmp{ "temp_data.txt" };
    tmp.write("processing...");

    if (earlyExit) return false; // destructor harus tetap dipanggil di sini

    tmp.write("done");
    return true;
}

int main() {
    std::cout << "--- Test 1: normal exit ---\n";
    process(false);

    std::cout << "\n--- Test 2: early exit ---\n";
    process(true);

    return 0;
}