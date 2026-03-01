#include<stdio.h>
int main()
{
	int i,n,min,max;
	printf("enter the size of the array\n");
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
		min=arr[i];
	}
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	printf("minimum element in the array is: %d\n",min);
	printf("maimum element in the arrayu is: %d",max);
	return 0;
}
