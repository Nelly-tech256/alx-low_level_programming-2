#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[30];
	int count=0,i=0;
	printf("enter name");
	fgets(name);
	count=strlen(name);
	puts(name);
	printf("length of the string is :%d",count);
}


