#include <stdio.h>

/*int main(void)
{
	int a[10],i;
	int even=0,odd=0;

	printf("enter array element:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			even++;
		else
			odd++;
	}
	printf("Total even number are:%d",even);
	printf("\n total odd number are:%d\n",odd);
}*/

int main()
{
	int n;

	printf("Enter the no:");
	scanf("%d",&n);
	if(n%2==0)
		printf("no, is even\n");
	else
		printf("no, is odd\n");
}
