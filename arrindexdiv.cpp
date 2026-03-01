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
	for(i=1;i<n;i++)
	{
		if(arr[i]%i==0)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;

}
