#include <stdio.h>

struct abc
{
	char a;
	int b;
	float c;
};

int main(void)
{
	struct abc s;
	printf("%lu", sizeof(s));
}

