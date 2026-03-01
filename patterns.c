#include<stdio.h>
int min_4(int a,int b,int c,int d)
{
	int min=a;
	if(b<min) min=b;
	if(c<min) min=c;
	if(d<min) min=d;
	return min;
}
int main()
{
	int n,i,j;
	printf("enter whre to start\n");
	scanf("%d",&n);
	int size=2*n-1;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			int val=n-min_4(i,j,size-1-i,size-1-j);
			printf("%d ",val);
		}
		printf("\n");
	}
}
