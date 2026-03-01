#include<stdio.h>
int main()
{
	int i,n,count=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%10==0)
		{
			count++;
		}
	}
	printf("The number of elements that are multiples of 10 :%d",count);
	return 0;
}
