#include <iostream>
#include <string>

struct Person
{
	std::string name{};
	int age{};

	void kisses(const Person& person)
	{
		std::cout << name << " kisses " << person.name << '\n';
	}
};

int main()
{
	Person joe{ "Joe", 29 };
	Person kate{ "Kate", 27 };

	joe.kisses(kate);

	return 0;
}

// urutan tidak masalah
struct Foo
{
	int z() { return m_data; } // We can access data members before they are defined
	int x() { return y(); }    // We can access member functions before they are defined

	int m_data{ y() };        // This even works in default member initializers (see warning below)
	int y() { return 5; }
};

// Be careful kids
struct Bad
{
	int m_bad1{ m_data }; // undefined behavior: m_bad1 initialized before m_data
	int m_bad2{ fcn() };  // undefined behavior: m_bad2 initialized before m_data (accessed through fcn())

	int m_data{ 5 };
	int fcn() { return m_data; }
};

// advanced compiler neat trick
struct Boo
{
	int z() { return m_data; } // m_data not declared yet
	int x() { return y(); }	   // y not declared yet
	int y() { return 5; }

	int m_data{};
};

// compiler akan menanganinya seperti ini
struct Boo
{
	int z(); // forward declaration of Boo::z()
	int x(); // forward declaration of Boo::x()
	int y(); // forward declaration of Boo::y()

	int m_data{};
};

int Boo::z() { return m_data; } // m_data already declared above
int Boo::x() { return y(); }	// y already declared above
int Boo::y() { return 5; }