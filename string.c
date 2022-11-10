#include <stdio.h>

int main(void)
{
	char name[30];
	printf("Enter name:");
	//scanf("%s%s"fname,lname);
	//printf("%s %s\n",fname,lname);

	fgets(name);
	printf("%s",name);
}
