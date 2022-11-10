#include <stdio.h>

int main(void)
{
	int age;

	printf("enter age:");
	scanf("%d",&age);
	if(age>20)
	{
		printf("your ageis:%d",age);
		printf("you are an adult\n");
	}
	printf("little children sleep early\n");
	return (0);
}

