#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i , *ptr;
	printf("enter total number of values:");
	scanf("%d", &n);

	ptr(int *)malloc(n*sizeof(int));

	printf("\nenter the values :");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}

	printf("\n the entered values are:");
	for(i=0;i<n;i++)
	{
			scanf("%d",*(ptr+i));
		}
	free(ptr);
}
