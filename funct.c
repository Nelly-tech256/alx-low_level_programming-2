#include <stdio.h>

void sum(void); //function declaration or prototype
void main()
{
	sum(); //function calling
}
void sum() //function definition
{
	int a,b,sum=0;
	printf("enter two numbers:");
	scanf("%d%d" ,&a,&b);
	sum=a+b;
	printf("sum %d\n", sum);
}


