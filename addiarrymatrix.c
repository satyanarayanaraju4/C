#include<stdio.h>
int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int m1[r][c],m2[r][c],m3[r][c];
	printf("enter the %d elements in m1\n",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("enter the %d elements in m2\n",r*c);
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
		}
	}
	printf("Matrix-A\n");
			for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	printf("Matrix-B\n");
			for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	printf("Matrix-c\n");
			for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}
	
}
