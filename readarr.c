#include <stdio.h>

int main(void)
{
	int a[5],i;
	printf("Enter the array elements:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);

	for(i=0;i<5;i++)//printing array in asecending order
	printf("\narray element at index %d is: %d",i,a[i]);
	for(i=4;i>=0;i--)//printing array in reverse order
	printf("\narray element at index %d is: %d",i,a[i]);

}
