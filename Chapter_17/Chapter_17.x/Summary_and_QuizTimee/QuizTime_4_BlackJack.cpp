#include <iostream>
#include <string_view>
#include <array>
#include <cassert>
#include <algorithm>
#include <limits>
#include "Random.h"

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

	friend std::ostream& operator<<(std::ostream& out, const Card& card)
	{
		constexpr std::string_view rankNames{ "A23456789TJQK" };
		constexpr std::string_view suitNames{ "CDHS" };

		out << rankNames[card.rank] << suitNames[card.suit];
		return out;
	}

	int value() const
	{
		constexpr std::array rankValues{ 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };

		return rankValues[rank];
	}
};

class Deck
{
private:
	std::array<Card, 52> m_cards{};
	std::size_t m_nextCardIndex{ 0 };public:
	Deck()
	{
		std::size_t index{ 0 };

		for (auto suit : Card::allSuits)
		{
			for (auto rank : Card::allRanks)
			{
				m_cards[index] = Card{ rank,suit };

				++index;
			}
		}
	}

	Card dealCard()
	{
		assert(m_nextCardIndex < m_cards.size() && "Deck::dealCard ran out of cards");
		
		return m_cards[m_nextCardIndex++];
	}

	void shuffle()
	{
		std::shuffle(m_cards.begin(), m_cards.end(), Random::mt);
		m_nextCardIndex = 0;
	}
};

struct Player
{
	int score{};
};

namespace Settings
{
	constexpr int bustScore{ 21 };
	constexpr int dealerStopScore{ 17 };
}

void ignoreLine()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

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

bool playBlackJack(Deck& deck)
{
	Player dealer{};
	Player player{};
	
	dealer.score += deck.dealCard().value();
	std::cout << "The dealer is showing: " << dealer.score << '\n';

	player.score += deck.dealCard().value();
	std::cout << "You have score: " << player.score << '\n';

	while (true)
	{
		char choice{getPlayerChoice()};

		if (choice == 's')
			break;

		Card card{ deck.dealCard() };
		player.score += card.value();
		std::cout << "You were dealt " << card << ". You now have: " << player.score << '\n';

		if (player.score > Settings::bustScore)
		{
			std::cout << "You went bust!\n";
			return false;
		}
	}

	while (dealer.score < Settings::dealerStopScore)
	{
		Card card{ deck.dealCard() };
		dealer.score += card.value();
		std::cout << "The dealer flips a " << card << ". They now have: " << dealer.score << '\n';
	}

	if (dealer.score > Settings::bustScore)
	{
		std::cout << "The dealer went bust!\n";
		return true;
	}

	return player.score > dealer.score;
}

int main()
{
	Deck deck{};

	deck.shuffle();

	if (playBlackJack(deck))
	{
		std::cout << "You win!\n";
	}
	else
	{
		std::cout << "You lose:)\n";
	}

	return 0;
}