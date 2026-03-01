#include<stdio.h>
int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int arr[r][c];
	printf("enter the %d elments\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<r;i++){
	
	{
		for(j=0;j<c;j++)
		   if(i+j>=r-1)
			printf("%d ",arr[i][j]);
		else
		printf("  ");
}
		printf("\n");
	}
	return 0;
}
