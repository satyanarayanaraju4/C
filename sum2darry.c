#include<stdio.h>
int main()
{
	int row,col,i,j,sum=0;
	scanf("%d%d",&row,&col);
	int arr[row][col];
	printf("enter the %d elements\n",row*col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
      }
      for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
			sum+=arr[i][j];
		}
		printf("\n");
      }
      printf("\nsum of all the elements in 2d array is :%d",sum);
      return  0;
}
