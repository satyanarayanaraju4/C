#include<stdio.h>
int main()
{
	int i,j;
	int M[2][5]={{10,20,30,40,50},{10,20,30,40,50}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("M[%d][%d]=%d ",i,j,M[i][j]);
		}
		printf("\n");
	}
	return 0;                      
}
