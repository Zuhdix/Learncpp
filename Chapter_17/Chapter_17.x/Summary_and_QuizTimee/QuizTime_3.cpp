#include <iostream>
#include <string_view> // Untuk referensi string yang sangat ringan (zero-overhead)
#include <array>       // C++ modern standard array (aman, punya boundary check)
#include <cassert>     // Untuk assert() - ngecek asumsi/kondisi saat runtime
#include <algorithm>   // Untuk algoritma standar seperti std::shuffle
#include "Random.h"    // (Eksternal) RNG C++ modern menggunakan Mersenne Twister

struct Card
{
	// Unscoped enum untuk menyimpan jenis Rank.
	// Nilainya otomatis dari 0 (rank_ace) sampai 12 (rank_king).
	enum Ranks
	{
		rank_ace,
		rank_2,
		rank_3,
		rank_4,
		rank_5,
		rank_6,
		rank_7,
		rank_8,
		rank_9,
		rank_10,
		rank_jack,
		rank_queen,
		rank_king,

		// Trik "Max": Karena ini elemen terakhir, nilainya otomatis 13.
		// Sangat berguna untuk menentukan ukuran array nanti.
		max_ranks,
	};

	enum Suits
	{
		suit_club,
		suit_diamond,
		suit_heart,
		suit_spades,

		max_suits, // Nilainya otomatis 4
	};

	// static: Array ini hanya dibuat SATU KALI di memori untuk seluruh program, bukan per objek Card.
	// constexpr: Dievaluasi saat compile-time. Disimpan di read-only memory. Sangat efisien.
	static constexpr std::array<Ranks, max_ranks> allRanks
	{
		rank_ace, rank_2, rank_3, rank_4, rank_5, rank_6,
		rank_7, rank_8, rank_9, rank_10, rank_jack, rank_queen, rank_king
	};

	static constexpr std::array<Suits, max_suits> allSuits
	{
		suit_club, suit_diamond, suit_heart, suit_spades
	};

	// Default member initialization ({}). 
	// Mencegah uninitialized variable (garbage value / Undefined Behavior) saat struct dibuat.
	Ranks rank{};
	Suits suit{};

	// Operator Overloading: Mengajarkan std::cout cara mencetak struct Card.
	// Menggunakan 'friend' agar bisa dipanggil oleh std::ostream.
	friend std::ostream& operator<<(std::ostream& out, const Card& card)
	{
		// Data-driven approach: Alih-alih pakai banyak 'switch-case', 
		// kita gunakan nilai enum (0-12 dan 0-3) sebagai indeks array (lookup table).
		constexpr std::string_view rankNames{ "A23456789TJQK" };
		constexpr std::string_view suitNames{ "CDHS" };

		out << rankNames[card.rank] << suitNames[card.suit];
		return out;
	}

	// Menerjemahkan enum Rank menjadi nilai poin game (misal untuk Blackjack).
	int value() const // 'const' karena fungsi ini tidak mengubah data (state) kartu.
	{
		constexpr std::array rankValues{ 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };

		return rankValues[rank];
	}
};

class Deck
{
private:
	// Memori utama yang menyimpan 52 objek kartu secara berurutan.
	std::array<Card, 52> m_cards{};

	// "Pembatas buku" (State). Mengingat kartu ke-berapa yang sedang ada di tumpukan paling atas.
	// Tanpa ini, kita tidak tahu kartu mana yang harus dibagikan selanjutnya.
	std::size_t m_nextCardIndex{ 0 };

public:
	// Default Constructor: Dipanggil otomatis saat objek Deck diciptakan.
	Deck()
	{
		std::size_t index{ 0 };

		// Loop bersarang (4 suit x 13 rank = 52 kombinasi) untuk mengisi dek.
		for (auto suit : Card::allSuits)
		{
			for (auto rank : Card::allRanks)
			{
				// Membuat objek Card baru dan memasukannya ke array
				m_cards[index] = Card{ rank, suit };
				++index;
			}
		}
	}

	// Membagikan 1 kartu teratas
	Card dealCard()
	{
		// Safety check: Memastikan fungsi ini tidak dipanggil kalau 52 kartu sudah habis.
		// Kalau m_nextCardIndex mencapai 52, program akan langsung crash (terdeteksi saat debug).
		assert(m_nextCardIndex < m_cards.size() && "Deck::dealCard ran out of cards");

		// Fotokopi kartu saat ini berdasarkan index "pembatas buku".
		Card currentCard{ m_cards[m_nextCardIndex] };

		// Geser pembatas buku ke kartu berikutnya.
		++m_nextCardIndex;

		return currentCard;

		// Catatan: Baris-baris di atas bisa disingkat menjadi 1 baris modern:
		// return m_cards[m_nextCardIndex++];
	}

	// Mengocok ulang seluruh kartu
	void shuffle()
	{
		// Algoritma standar C++ untuk mengacak posisi elemen di dalam array
		std::shuffle(m_cards.begin(), m_cards.end(), Random::mt);

		// SANGAT PENTING: Karena dek baru saja dikocok ulang, kita harus kembalikan
		// "pembatas buku" ke tumpukan paling atas (index 0).
		m_nextCardIndex = 0;
	}
};

int main()
{
	// Menciptakan objek deck. Constructor Deck() langsung bekerja mengisi 52 kartu.
	Deck deck{};

	// Ambil 3 kartu (kondisi urut)
	std::cout << deck.dealCard() << ' ' << deck.dealCard() << ' ' << deck.dealCard() << '\n';

	// Kocok
	deck.shuffle();

	// Ambil 3 kartu lagi (kondisi sudah teracak, index mulai dari 0 lagi)
	std::cout << deck.dealCard() << ' ' << deck.dealCard() << ' ' << deck.dealCard() << '\n';

	return 0;
}