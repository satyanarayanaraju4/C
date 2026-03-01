#include<stdio.h.>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arry[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arry[i]);
	}
	printf("the element in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arry[i]);
	}
	return 0;
}
