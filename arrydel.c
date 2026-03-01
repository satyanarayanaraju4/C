#include<stdio.h>
int main()
{
	int i,n,pos;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the position\n");
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
