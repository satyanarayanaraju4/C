#include<stdio.h>
int main()
{
	int i,n,evelatevindex=0,odelatodindex=0;
	scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i+=2)
	{
		if(arr[i]%2==0)
		evelatevindex+=arr[i];	
	}
	for(i=1;i<n;i+=2)
	{
	   if(arr[i]%2!=0)
		odelatodindex+=arr[i];
	}
	printf("sum of even elements at even index is:%d\n",evelatevindex);
	printf("sum of odd elements at odd index is:%d",odelatodindex);
	return 0;
	
}
