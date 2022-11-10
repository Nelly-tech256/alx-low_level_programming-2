#include <stdio.h>

int main(void)
{
	int a[2][3],i,j,sum=0;

	printf("enter elements of matrix array:");
	for(i=0;1<2;i++)
	{
		for(j=0;j<3;j++)/*this loop is for reading values from the array*/
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("matrix is:\n");
	for(i=0;i<2;i++)/*this loop is for writing the array in a 2 by 3 matrix*/
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);/*the \t is the tab/space for aligning
						 the matrix with spaces*/
			sum=sum+a[i][j];
		}
		printf("\n");/*this line is for the cursor to print to next lien*/

	}
	printf("\nsum+%d",sum);// for printing sum


}
