#include <stdio.h>

int main(){

int disp[2][3],i,j;

for(i=0;i<2;i++)//the for loops are for reading the rows and columns
{
	for(j=0;j<3;j++)
	{
		printf("Enter value for disp[%d][%d]:", i, j);
		scanf("%d", &disp[i][j]);
	}
}
//displaying array elements
printf("Two dimesional array elements:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++){
		//printf("%d\t", disp[i][j]); or we can put a spacce against the %d
		printf("%d ", disp[i][j]);
		if(j==2){
			printf("\n");
		}
	}
}
 return 0;

 }



