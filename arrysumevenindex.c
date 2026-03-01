#include<stdio.h>
int main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i+=2)
	{
		sum=sum+arr[i];
	}
	printf("sum of even index is numbers :%d",sum);
	return 0;
}
