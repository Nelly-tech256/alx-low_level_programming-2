#include <stdio.h>

int main(void)
{
	int num;
	int *num_ptr;

	num = 20;
	num_ptr = &num;

	printf("%d\n", *num_ptr);
	return (0);
}

