#include<stdio.h>
int main()
{
	int i,pro=1,n;
	scanf("%d",&n);
	for(i=n; i>=1; i--)
	{
		pro=pro*i;
	}
	printf("factorial of %d is %d",n,pro);
	return 0;
}
