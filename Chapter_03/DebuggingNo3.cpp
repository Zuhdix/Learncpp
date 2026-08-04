#include<iostream>

void d()
{      // Mencari urutan Callstack dari debugging
}

void c()
{
}

void b()
{
	c();
	d();
}

void a()
{
	b();
}

int main()
{
	a();

	return 0;
}
