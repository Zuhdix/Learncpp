#include "Wallet.h"
#include <iostream>

Wallet::Wallet(double amount)
	: m_balance{ amount }
{ }

void Wallet::deposit(double amount)
{
	if (amount > 0)
		m_balance += amount;
}

void Wallet::withdraw(double amount)
{
	if (amount > 0 && amount <= m_balance)
		m_balance -= amount;
}

void Wallet::printBalance() const 
{
	std::cout << "Balance: $" << m_balance << '\n';
}