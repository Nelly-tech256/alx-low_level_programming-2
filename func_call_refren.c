#include <stdio.h>

//void fun(int,int);function declaration by value
void fun(int*,int*);//function call by reference
int main(void)
{
	int x=8,y=6;
	//fun(x,y);function call by value
	fun(&x,&y);//function call by reference
	printf("inside main(calling function)\n");
	printf("x=%d y=%d\n",x,y);
}
//void fun(int x,int y)fuction prototye or definition by value
void fun(int* x,int* y)//function prottye by refeerence
{
	*x=6;//function call by reference
	//x=6;function call by value
	*y=8;//function call by reference
	//y=8;function call by value
	printf("inside fun(called function)\n");
	printf("x=%ls y=%ls\n",x,y);
}
