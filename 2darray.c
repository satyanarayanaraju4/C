#include<stdio.h>
int main()
{
	int i,j,arr[20][20],row,col;




// reading of 2D array                                                                                  
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		scanf("%d",arr[i][j]);
	}
}
// printing of 2D Arrays
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		printf("%d",arr[i][j]);
	}
	printf("\n");
}
}

