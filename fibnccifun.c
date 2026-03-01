#include<stdio.h>
int main()
{
	int x,i,j,temp;
	printf("enter the size of array: \n");
	scanf("%d",&x);
	int arr[x];
	printf("enter array elements:\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array before sorting: \n");
	for(i=0;i<x;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<x-1;i++)
	{
		for(j=0;j<x-i-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("array after sorting:\n");
	for(i=0;i<x;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
