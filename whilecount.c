#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	while(n>0)
	{
		int rem=n%10;
		count++;
		n=n/10;
	}
	printf("count=%d",count);
	return 0;
}
