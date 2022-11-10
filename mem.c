#include <stdio.h>
int main()
{
	int a = 1025;
	int *p;
	p = &a;

	printf("size of integer is %ld bytes\n", sizeof(long unsigned int));
	printf("Address = %ls, value = %d\n", p , *p);
}
