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
	printf("\n");
	for(i=1;i<n-1;i++)
	{
		if(arr[i-1]%2==0 && arr[i+1]%2==0)
		{
			sum+=arr[i];
		}
	}
	printf("%d",sum);
	return 0;
}
