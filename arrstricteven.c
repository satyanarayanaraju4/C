#include<stdio.h>
int main()
{
	int i,n,even=1;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
	{
			even=0;
		break;
	}
	}
	if(even==0)
	{
		printf("not strict even");
	}
	else 
	{
		printf("the given array is strict even");
	}
	return 0;
}
