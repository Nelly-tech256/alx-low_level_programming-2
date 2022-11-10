#include <stdio.h>

int main(void)
{
	int num;
	int *num_ptr;

	num_ptr = &num;

	printf("num's address is %p\n", num_ptr);
	return (0);}
