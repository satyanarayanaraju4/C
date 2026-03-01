#include<stdio.h>
int main()
{
	int i,n,e,count=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(arr[i]==e)
		{
			count++;
		}
	}
	printf("no of times =%d",count);
	return 0;
}
