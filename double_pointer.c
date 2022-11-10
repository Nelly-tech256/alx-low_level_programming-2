#include <stdio.h>

int main(void)
{
	int a = 10;
	int *p = &a;
	int **q = &p;
	int ***r = &q;

	printf("a = %d\n",a);
	printf("a = %d\n",*p);
	printf("a = %d\n",*(*q));
	printf("a = %d\n", *(*(*r)));
	printf("address of q = %x %x",r, &q);
	printf("address of p = %x", &p, q);
}

