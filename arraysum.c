#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of all numbers in arr is:%d",sum);
	return 0;
}
