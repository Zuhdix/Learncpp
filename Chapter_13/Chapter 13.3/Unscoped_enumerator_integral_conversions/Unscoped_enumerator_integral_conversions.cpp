enum Color
{
	black, // 0
	red,
	blue,
	green, // 3
	white,
	cyan,
	yellow,
	magenta, // 7
};

int main()
{
	Color shirt{ blue }; // shirt actually stores integral value 2

	return 0;
}

// nilai enum bisa di inisialisasi
enum Animal
{
	cat = -3, // bisa negative
	dog,	// -2
	pig,	// -1
	horse = 5,
	giraffe = 5, // shares same value (harus di hindari)
	chicken, // 6
};
// hindari memberikan nilai ekplisit kecuali alasan khusus


// harus selalu ada nilai default (0) enum biar gampang di tracking secara ekplisit.
enum Winner
{
	winnerUnknown, // default value (0)
	player1,
	player2,
};

// somewhere later in your code
if(w == winnerUnknown) // handle case secara tepat
