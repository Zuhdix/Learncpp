#include <iostream>

/*	JAWABAN VALID (asumsi int dan long 4 byte)
*	kode jawaban
*	> A) tidak perlu konversi
*	> B) promosi numerik
*	> C) konversi numerik
*	> D) compiler error cause narrowing
*/
int main()
{
	int a{ 5 };			// 1a; A)
	int b{ 'a' };		// 1b; C) jawaban bener B) 
	int c{ 5.4 };		// 1c; D)
	int d{ true };		// 1d; C) jawaban bener B)
	int e{ static_cast<int>(5.4) }; // 1e; C) karena kita kasih tau compiler bahwa gak papa kita kehilangan data.

	double f{ 5.0f };		// 1f; C) jawaban benar  B)
	double g{ 5 };			// 1g; B) jawaban bener C)

	long h{ 5 };			// 1h; C)

	float i{ f };			// 1i; C) jawaban bener D)
	float j{ 5.0 };			// 1j; C)

	/* test code */
	std::cout << a << '\n';

	return 0;
}