#include<stdio.h>
int main()
{
	int i,n,min,max;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("maximum number is:%d\n",max);
	printf("minimum number is:%d",min);
	return 0;	
}
