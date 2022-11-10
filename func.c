#include <stdio.h>

void change(int *a)
{
	*a = 50;
}


int main(void)
{
	int num = 10;
	int *num_ptr = &num;

	printf("value of num before %d\n", num);

	change(num_ptr);

	printf("value of num after %d\n", num);

	return (0);
}

