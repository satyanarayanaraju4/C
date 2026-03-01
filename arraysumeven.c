#include<stdio.h>
int main()
{
	int i,n,oddsum=0,evensum=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		evensum+=arr[i];
		else
		oddsum+=arr[i];
	}
	printf("evensum =%d\n",evensum);
	printf("oddsum =%d",oddsum);
	return 0;
}
