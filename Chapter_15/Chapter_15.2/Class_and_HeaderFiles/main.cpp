#include "Wallet.h"

int main()
{
	Wallet w{ 100.0 };
	w.deposit(50.0);
	w.withdraw(30.0);
	w.printBalance();

	return 0;
}