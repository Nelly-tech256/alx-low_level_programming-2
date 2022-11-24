#include <stdio.h>

int main(void)
{
	int a[5]={1,4,-1,6,3,};
	int *p=&a[0];
	printf("value is: %d\n",*p);
	printf("address of element is: %ls\n",p);
	p=p+2;
	printf("value is: %d\n",*p);
	printf("address of element is: %ls\n",p);

}

