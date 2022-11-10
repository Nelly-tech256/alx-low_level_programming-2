#include <stdio.h>

int main(void)
{
	char *char_ptr;
	int *int_ptr;

	int num = 10;
	char a = 'R';

	char_ptr = &a;
	int_ptr = &num;

	printf("The address of a is %p\n", &a);
	printf("The address of the pointer char_ptr is %p\n", char_ptr);

	printf("The address of num is %p\n", &num);
	printf("the value of int_ptr is %p\n", int_ptr);

	return (0);
}
