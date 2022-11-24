#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 *main - test file
 * program starts execution from here
 *
 *Return: always 0
 */
int main(void)
{
	int count_std = 0;//return value from standard printf
	int count_prsmad = 0;//return value form personal_made printf
	write(1,"STANDARD:\n",10);//original printf function
	count_std = printf("tester\n");
	printf("I printed %d characters\n", count_std);

	write(1,"_________________________\n",26);//line separator. prints a line

	write(1,"PRESONAL_MADE:\n",15);//personal made printf function
	count_prsmad = _printf("test%er\n");
	printf("I printed %d characters\n", count_prsmad);

	return (0);
}


