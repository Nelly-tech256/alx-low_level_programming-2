#include <stdio.h>

int main(void)
{
	int a[5],b[5],c[5],i;

	printf("enter first array elements:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("enter second array elements:");
	for(i=0;i<5;i++)
		scanf("%d",&b[i]);

	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		printf("\n third array element at index %d is:%d\n",i,c[i]);
	}
}
