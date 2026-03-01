#include<stdio.h>
int main()
{
	int i,n,pro=1;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		pro=pro*i;
	}
	printf("%d ",pro);
	return 0;
}
