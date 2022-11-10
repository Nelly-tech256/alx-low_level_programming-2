#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i, sum = 0;

	printf("argc = %d\n", argc);
	printf("let's see whats in argv[]\n");
	if(argc > 1)
	{
		for(i = 1; i < argc; i++)
		{
		printf("argv[%d] = %s\n", i , argv[i]);
		sum = sum + atoi(argv[i]);
		//or sum += atoi(argv[i]); "atoi converts a character string to an interger value"
		}
		printf("total = %d\n", sum);
	}
	return 0;
}
