#include<stdio.h>
int main()
{
	int i,n,pos,ele;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter position to insert number\n");
	scanf("%d",&pos);
	printf("enter the number to insert\n");
	scanf("%d",&ele);
	for(i=n;i>pos-1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos-1]=ele;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
