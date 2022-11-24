#include <stdio.h>

int sum(int, int);//function declaration

int main(void)
{
	int s=0;
	int (*ptr)(int,int)=&sum;
	s=(*ptr)(9,6);
	printf("sum=%d\n",s);
}

int sum(int a,int b)//function defintion
{
	return a+b;
}
