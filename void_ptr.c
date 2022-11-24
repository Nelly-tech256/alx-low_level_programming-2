#include <stdio.h>

int main(void)
{
	void *vp;

	int a=5;
	float b=8.98;
	char ch='g';

	vp=&a;//first access the address of a variables
	printf("a=%d\n",*(int*)vp);//type cast it into an int ptr

	vp=&b;
	printf("b=%f\n",*(float*)vp);

	vp=&ch;
	printf("ch=%c\n",*(char*)vp);
}
