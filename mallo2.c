#include <stdio.h>
#include <stdlib.h>

/* void * malloc(size_t size) */

int main(int argc, char *argv[])// accepts arguments on the command line
{
	int *num;
	int i, j, n, len;/*len counts the number of arguments written on the
				command line*/
	int mem;//memory

	len = argc -i;/*this line helps not to count the program name on the
	            command line*/
	mem = len * (sizeof(int)); /* since memory varies from one machine to
				      another,we dont need to give a constant
				      value for the given data type.
				      we use the sizeof operator to
				      dynamically allocate the size*/
	num = malloc(mem);

	j = 0;
	for(i = 1; i < argc; i++)
	{
		num[j] = atoi(argv[i]);
		j++;
		}

	for(n = 0; n < argc - 1; n++)
	{
		printf("element: %d\n", num[n]);
		}
	free(num);

	return (0);
}


