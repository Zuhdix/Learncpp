#include "Random.h"
#include <iostream>
#include <string_view>
#include <vector>
#include <limits>

namespace WordList
{
	const std::vector<std::string_view> words{
		"mystery", "broccoli", "account", "almost",
		"spaghetti", "opinion", "beautiful", "distance", "luggage"
	};

	std::string_view getRandomWord()
	{		
		return words[Random::get<std::size_t>(0, words.size() - 1)];
	}
}

class Session
{
private:
	std::string_view m_word{};
	std::vector<bool> m_guessedLetters{};

public:
	explicit Session(std::string_view word)
		: m_word(word), m_guessedLetters(26, false)
	{
	}

	void printWord() const
	{
		std::cout << "The word: ";
		for (const auto& c : m_word)
			if (isLetterGuessed(c) == true) 
			{
				std::cout << c;
			}
			else
			{
				std::cout << "_"; // (3) blum masuk input jadi print ini
			}
		std::cout << '\t';
	}

	void printRightWord() const
	{
		std::cout << "The word was: " << m_word << '\n';
	}

	int getWrongGuess() const
	{
		int wrongCount{};
		for (char c{ 'a' }; c <= 'z'; ++c)
		{
			if (isLetterGuessed(c) && !isLetterInWord(c))
			{
				++wrongCount;
			}
		}
		return wrongCount;
	}

	bool isLetterInWord(char c) const
	{
		for (const auto& letter : m_word)
		{
			if (letter == c) // as-if (lett(er = m_word[i];) jika init for-loopnya pake i
				return true;
		}

		return false;
	}

	bool isLetterGuessed(char c) const
	{
		std::size_t index = static_cast<std::size_t>(c - 'a'); // (8) ubah char ke size_t biar bisa jadi index dengan syarat 'b' - 'a' (98 - 97 = 1)
			return m_guessedLetters[index]; // (9) return m_g[1] berarti ini bilang ubah index 1 jadi true? mulai gak ngeh
	}

	bool isWon() const
	{
		for (char c : m_word)
		{
			if (!isLetterGuessed(c))
				return false;
		}
		return true;
	}

	void setLetterGuessed(char c)
	{
		std::size_t index = static_cast<std::size_t>(c - 'a'); // (12) sama kaya (8)
		m_guessedLetters[index] = true; // (13) ternyata no (9) cuma tampungan dan di olah disini, set index 1 jadi true
	}
};

void stateGame(const Session& session)
{
	 session.printWord();
	 std::cout << '\t';

	 std::cout << "Wrong guesses: ";
	 for (int i{ 0 }; i < 6 - session.getWrongGuess(); ++i)
	 {
		 std::cout << '+';
	 }

	 for (char c{ 'a' }; c <= 'z'; ++c)
	 {
		 if (session.isLetterGuessed(c) && !session.isLetterInWord(c))
		 {
			 std::cout << c;
		 }
	 }

	 std::cout << '\n';
}

char getInput()
{
	while (true)
	{
		char input{};
		std::cout << "Enter your next letter: ";
		std::cin >> input;

		if (!std::cin) 
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
		if (input >= 'a' && input <= 'z') // pengecekan batas a sampe z
		{
			return input; // (6) kalo valid return input (misal b) (katanya almost)
		}

		std::cout << "That wasn't a valid input. Try again.\n"; 
	}
}

int main()
{
	std::cout << "Welcome to C++man (a variant of Hangman)\n";
	std::cout << "To win: guess the word. To lose: run out of pluses.\n\n";

	Session word{ WordList::getRandomWord() };
	while (true)
	{
		stateGame(word);
		char ch{getInput()};
		
		if (word.isLetterGuessed(ch))
		{
			std::cout << "You already guessed that. Try again.\n";
			continue;
		}
		else if (word.isLetterInWord(ch))
		{
			std::cout << "Yes, '" << ch << "' is in the word\n\n";
			word.setLetterGuessed(ch);
		}
		else
		{
			std::cout << "No, '" << ch << "' is not in the word\n\n";
			word.setLetterGuessed(ch);
		}

		if (word.getWrongGuess() >= 6)
		{
			std::cout << "You lost!  ";
			word.printRightWord();
			std::cout << "\n\n";
			break;
		}

		if (word.isWon())
		{
			std::cout << "You won!, Congrats!!!\n";
			break;
		}
	}
	return 0;
}