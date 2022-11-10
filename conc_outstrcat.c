#include <stdio.h>

/*
 * wap to cancatenate two strings without using strcat
 */

int main(void)
{
	char str1[50], str2[50], i ,j;

	printf("\nEnter first string: ");
	scanf("%s",str1);
	printf("\nEnter second string: ");
	scanf("%s",str2);

	/* this loop is to store length*/
	for(i=0;str1[i]!='\0';i++);
	/* this loop would concatenate the end of strl */
	for(j=0;str2[j]!='\0';j++, i++)
	{
		str1[i]=str2[j];
	}

	str1[i] = '\0';
	printf("\nOutput: %s \n", str1);
	return 0;
}



