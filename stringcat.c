#include <stdio.h>
#include <string.h>

int main()
{
	int L1,L2,i;
	char s1[30]="Nelson";
	char s2[]="susan";
	strncat(s1,s2,3);//concatenating string with specificed no of char

	/*L1=strlen(s1);
	L2=strlen(s2);
	for(i=0;i<=L2;i++)
	{
		s1[L1+i]=s2[i];
	}*/

	printf("string after concatenation is:%s\n",s1);
	puts(s2);
}
