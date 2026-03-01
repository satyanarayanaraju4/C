#include<stdio.h>
int main()
{
	int n,pro=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{   int rem=n%10;
		pro=pro*rem;
		n=n/10;
	}
	printf("%d",pro);
	return 0;
}
