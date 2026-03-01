#include<stdio.h>
int main()
{
	int i,n,eveindex=0,oddindex=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
	  if(i%2==0)
	  eveindex+=arr[i];
	  else
	  oddindex+=arr[i];
	}
	printf("sum of even index elements is:%d\n",eveindex);
	printf("sum of odd index elements is:%d ",oddindex);
	return 0;
}
