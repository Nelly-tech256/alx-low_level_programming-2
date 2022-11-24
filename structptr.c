#include <stdio.h>

struct student
{
	int rollno;
	char name[20];
	float marks;
};
int main(void)
{
	struct student s1={1,"Nelly",90};
	//struct student s2={2,"krystal",98};
	struct student *ptr = &s1;
	{
		printf("info for s1");
		printf("\n %d %s %f",ptr->rollno,ptr->name,ptr->marks);
		//printf("\n %d %s %f", (*ptr).rollno,(*ptr).name,(*ptr).marks);
	//printf("\n info for s2");
	//printf("\n %d %s %f",s2.rollno,s2.name,s2.marks);
}
}
