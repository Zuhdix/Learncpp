class NamaKelas {
public: // 1. Access Specifier (Publik)
    
    // 2. Constructor (Konstruktor)
    NamaKelas(TipeParam parameter) {
        // Kode inisialisasi objek saat lahir
    }
    // 3. Member Function (Method)
    TipePengembalian namaMethod(TipeParam parameter) {
        // Perilaku/Logika class
        return nilai;
    }
private: // 1. Access Specifier (Privat)

    // 4. Data Member (Variable)
    TipeData m_namaVariabel; 
    
}; // <--- 5. Semicolon (Wajib!)

// IMPLEMENTASI
class Kotak {
public:
    // Constructor (Inisialisasi)
    Kotak(int p, int l) {
        m_panjang = p;
        m_lebar = l;
    }

    // Member Function (Behavior)
    int hitungLuas() {
        return m_panjang * m_lebar;
    }

private:
    // Data Member (State)
    int m_panjang; 
    int m_lebar;  
}; // Jangan lupa titik koma
