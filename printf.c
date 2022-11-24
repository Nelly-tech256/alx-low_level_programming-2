#include <stdio.h>
#include <stdarg.h>
//you cant use chars,floats,
void prints_ints(int num, ...)//prog that prints variable
	//number of arguments of derrent data types
{
	va_list args;//namne of our macro

	va_start(args, num);//takes two arguments va_list and the
	//name of the last required argument.
	for (int i = 0; i < num; i++)
	{
		int value = va_arg(args,int);
		printf("%d: %d\n" ,i,value);
	}

	va_end(args);
}

int main(void)
{
	prints_ints(3, 224,14,25,282);
	prints_ints(6,8,4,2,8,9,7.8);
	prints_ints(2,7,4,1,1.2,8,0,4,2,1);//fucntion prints a variable number of integers and prints them all out.
}

