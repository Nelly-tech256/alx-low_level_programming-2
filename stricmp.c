#include <stdio.h>
#include <string.h>

int main(void)
{
	int flag=0,i;
	//int value;

	char s1[30],s2[30];
	printf("enter string 1:");
	gets(s1);
	printf("enter string 2:");
	gets(s2);
	//value=strcmp(s1,s2);

	for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	//if(value==0)
		printf("same\n");
	else
		printf("not same\n");
}
