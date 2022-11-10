#include <stdio.h>

void cahnge(int a)
{
	a = 50;
}


int main(void)
{
	int *int_ptr;

	int num = 10;
	 printf("The value of num before is %d\n", num);

	int_ptr = &num;
	*int_ptr = 30;

	printf("The value of num after is %d\n", num);

	return (0);
}
