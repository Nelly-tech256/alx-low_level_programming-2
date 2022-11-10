#include <stdio.h>

/*
 *program that prints nos from 1 to 10 in a way that no is odd, add 1 and when
 * no is even subtruct 1
 */

void odd();
void even();
int n = 1;

void odd()
{
	if (n <=10){
		printf("%d ", n+1);
		n++;
		even();
	}
	return;
}

void even()
{
	if (n <= 10)
	{
		printf("%d ", n-1);
		n++;
		odd();
	}
return;
printf("\n");
}

int main()
{
	odd();
}
