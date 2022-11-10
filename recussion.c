#include <stdio.h>

/*unsigned int factorial(unsigned int n)
{
	if (n <= 1)
	return 1;
	return n * factorial(n - 1);
}

int main()
{
	printf("%i\n", factorial(4));
	return 0;
}*/
//a recussion program to retutrn sum of all digits in a given interger value
/*unsigned int sumdigits(unsigned int num)//this is our func prototype
{
	if (num == 0)//this is our base case so that the function stops
		return 0;
	return (num % 10) + sumdigits(num / 10);
}

int main()
{
	printf("%i\n", sumdigits(8968));
	return 0;
}*/
//prog to print sum of a given set of natural numbers

int sum(int x)//func prototye
{
	int y = 0;
	if (y == 1)
		return x;
	y = x + sum(x-1);
	return y;

	int main()
	{
		int a;
		a = sum(y);
		printf("%d",a);
	}
}

