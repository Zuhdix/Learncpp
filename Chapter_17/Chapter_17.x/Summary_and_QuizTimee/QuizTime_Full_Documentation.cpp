// C++20
// Compile: g++ -std=c++20 -Wall -Wextra -Werror -pedantic main.cpp

#include <iostream>
#include <string_view>
#include <array>
#include <cassert>
#include <algorithm>
#include <limits>
#include "Random.h"

// ============================================================================
// STRUCT: Card
// Merepresentasikan satu kartu remi (Rank & Suit).
// ============================================================================
struct Card
{
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

		max_ranks,
	};

	enum Suits
	{
		suit_club,
		suit_diamond,
		suit_heart,
		suit_spades,

		max_suits,
	};

	// Array statis berisi semua rank & suit agar mudah di-iterasi saat inisialisasi deck
	static constexpr std::array<Ranks, max_ranks> allRanks
	{
		rank_ace, rank_2, rank_3, rank_4, rank_5, rank_6,
		rank_7, rank_8, rank_9, rank_10, rank_jack, rank_queen, rank_king
	};

	static constexpr std::array<Suits, max_suits> allSuits
	{
		suit_club, suit_diamond, suit_heart, suit_spades
	};

	Ranks rank{};
	Suits suit{};

	// Overload operator<< untuk mencetak kartu dalam kode 2 karakter (contoh: "AH", "TD")
	friend std::ostream& operator<<(std::ostream& out, const Card& card)
	{
		constexpr std::string_view rankNames{ "A23456789TJQK" };
		constexpr std::string_view suitNames{ "CDHS" };

		out << rankNames[card.rank] << suitNames[card.suit];
		return out;
	}

	// Mengembalikan nilai numerik kartu di Blackjack (Ace default = 11, Face cards = 10)
	int value() const
	{
		constexpr std::array rankValues{ 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };
		return rankValues[rank];
	}
};

// ============================================================================
// CLASS: Deck
// Mengelola satu set tumpukan 52 kartu remi.
// ============================================================================
class Deck
{
private:
	std::array<Card, 52> m_cards{};
	std::size_t m_nextCardIndex{ 0 }; // Penunjuk indeks kartu berikutnya yang akan dibagikan

public:
	// Default constructor: mengisi deck dengan 52 kombinasi suit dan rank
	Deck()
	{
		std::size_t index{ 0 };

		for (auto suit : Card::allSuits)
		{
			for (auto rank : Card::allRanks)
			{
				m_cards[index] = Card{ rank, suit };
				++index;
			}
		}
	}

	// Membagikan kartu teratas dan memajukan penunjuk indeks
	Card dealCard()
	{
		assert(m_nextCardIndex < m_cards.size() && "Deck::dealCard ran out of cards");
		return m_cards[m_nextCardIndex++];
	}

	// Mengacak posisi kartu dan mereset penunjuk indeks ke awal tumpukan
	void shuffle()
	{
		std::shuffle(m_cards.begin(), m_cards.end(), Random::mt);
		m_nextCardIndex = 0;
	}
};

// ============================================================================
// STRUCT: Player
// Menyimpan skor peserta (dealer / player) serta menangani otomatisasi nilai Ace.
// ============================================================================
struct Player
{
	int score{};
	int aceCount{}; // Melacak berapa banyak kartu Ace yang saat ini bernilai 11

	// Menambahkan kartu dan menyesuaikan nilai Ace (11 -> 1) jika skor melebihi 21
	void addCard(Card card)
	{
		score += card.value();
		if (card.rank == Card::rank_ace)
		{
			++aceCount;
		}

		// Jika bust (> 21) tapi masih punya cadangan Ace bernilai 11, ubah nilainya jadi 1 (kurangi 10 poin)
		while (score > 21 && aceCount > 0)
		{
			score -= 10;
			--aceCount;
		}
	}
};

// Aturan dan batas skor permainan
namespace Settings
{
	constexpr int bustScore{ 21 };       // Batas maksimal skor sebelum dinyatakan bust/kalah
	constexpr int dealerStopScore{ 17 }; // Dealer wajib berhenti menarik kartu jika sudah mencapai skor ini
}

// Membersihkan sisa karakter di buffer stream input
void ignoreLine()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Validasi input pilihan player: hanya menerima 'h' (hit) atau 's' (stand)
char getPlayerChoice()
{
	char choice{};
	while (true)
	{
		std::cout << "(h) to hit, or (s) to stand: ";
		std::cin >> choice;

		ignoreLine();

		if (choice == 'h' || choice == 's')
			return choice;
	}
}

// Kemungkinan hasil akhir ronde
enum class GameResult
{
	playerWon,
	dealerWon,
	tie,
};

// ============================================================================
// FUNCTION: playBlackJack
// Mengelola alur satu ronde Blackjack penuh dan mengembalikan hasil akhirnya.
// ============================================================================
GameResult playBlackJack(Deck& deck)
{
	Player dealer{};
	Player player{};

	// 1. Pembagian kartu awal: Dealer 1 kartu, Player 2 kartu
	Card del{ deck.dealCard() };
	dealer.addCard(del);
	std::cout << "The dealer is showing: " << del << " (" << dealer.score << ")\n";

	Card c1{ deck.dealCard() };
	Card c2{ deck.dealCard() };
	player.addCard(c1);
	player.addCard(c2);
	std::cout << "You are showing: " << c1 << ' ' << c2 << " (" << player.score << ")\n";

	// 2. Giliran Player: Berulang kali memilih hit atau stand
	while (true)
	{
		char choice{ getPlayerChoice() };

		if (choice == 's')
			break;

		Card card{ deck.dealCard() };
		player.addCard(card);
		std::cout << "You were dealt " << card << ". You now have: " << player.score << '\n';

		// Jika player bust, giliran dealer dibatalkan dan player langsung kalah
		if (player.score > Settings::bustScore)
		{
			std::cout << "You went bust!\n";
			return GameResult::dealerWon;
		}
	}

	// 3. Giliran Dealer: Menarik kartu sampai mencapai batas minimal stop score (17)
	while (dealer.score < Settings::dealerStopScore)
	{
		Card card{ deck.dealCard() };
		dealer.addCard(card);
		std::cout << "The dealer flips a " << card << ". They now have: " << dealer.score << '\n';
	}

	// Jika dealer bust, player menang
	if (dealer.score > Settings::bustScore)
	{
		std::cout << "The dealer went bust!\n";
		return GameResult::playerWon;
	}

	// 4. Showdown: Bandingkan skor akhir jika tidak ada yang bust
	if (player.score > dealer.score)
		return GameResult::playerWon;
	if (player.score < dealer.score)
		return GameResult::dealerWon;

	return GameResult::tie; // Skor sama persis
}

int main()
{
	Deck deck{};
	deck.shuffle();

	// Menampilkan hasil ronde berdasarkan enum class yang dikembalikan
	switch (playBlackJack(deck))
	{
	case GameResult::playerWon:
		std::cout << "You win!\n";
		break;
	case GameResult::dealerWon:
		std::cout << "You lose!\n";
		break;
	case GameResult::tie:
		std::cout << "It's a tie!\n";
		break;
	}

	return 0;
}