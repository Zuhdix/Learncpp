int main()
{
	int i{ 5 };
	double d{ 4.0 };

	int* iPtr{ &i };	// ok: a pointer to an int can point to an int object
	int* iPtr2{ &d };	//not okay: a pointer to an int can't point to a double objcet

	double* dPtr{ &d };  // ok: a pointer to a double can point to a double object
	double* dPtr2{ &i }; // not okay: a pointer to a double can't point to an int object


	return 0;
}