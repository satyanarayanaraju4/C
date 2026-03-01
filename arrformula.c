#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		arr[i]=(i*i)-(i+i);
	}
	for(i=0;i<n;i++)
	{
	
	printf("%d ",arr[i]);
}
	return 0;
}
