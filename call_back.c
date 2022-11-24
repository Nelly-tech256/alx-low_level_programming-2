#include <stdio.h>

void sum(int a,int b)
{
	printf("sum=%d\n",a+b);
}
void sub(int a,int b)
{
	printf("sub=%d\n",a-b);
}

void display(void (*fptr)(int,int))
{
	fptr(8,9);
	//(*fptr)(8,9);we can also acess the values like this
}

int main(void)
{
	display(&sum);
	//or display(sum);
	display(sub);
}
