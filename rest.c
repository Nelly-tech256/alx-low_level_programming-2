#include <stdio.h>

int foo(int);

int main(void)
{
	int x;

	x = 10;

	foo(x);

	printf("%d\n", x);

	return (0);
}

int foo(int a)
{
	a = 20;
	return (a);
}

