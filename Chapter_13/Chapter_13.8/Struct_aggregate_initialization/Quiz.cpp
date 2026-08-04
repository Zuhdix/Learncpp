#include <iostream>
#include <string>

struct Book
{
	std::string title{};
	std::string author{};
	int year{};
	double price{};
};

std::ostream& operator<<(std::ostream& os, const Book& book)
{
	os << "Title: " << book.title << ", Author: " << book.author
		<< ", Year: " << book.year << ", Price: $" << book.price;
	return os;
}

int main()
{
	Book book1{ "The Great Gatsby", "F. Scott Fitzgerald", 1925, 10.99 };
	Book book2{ .title{"Bumi"}, .year{2020} };

	std::cout << book1 << '\n';
	std::cout << book2 << '\n';

	return 0;
}