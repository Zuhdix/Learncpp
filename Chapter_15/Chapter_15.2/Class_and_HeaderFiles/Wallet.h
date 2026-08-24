#pragma once

class Wallet
{
private:
	double m_balance{};

public:

	Wallet(double initialBalance);

	void deposit(double amount);

	void withdraw(double amount);

	double getBalance() const { return m_balance; }

	void printBalance() const;

};