#include<stdio.h>
int main()
{
	int n,pro=1;
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		int rem=n%10;
		pro=pro*rem;
		n=n/10;
	}
	printf("product of digits of %d is :%d",temp,pro);
	return 0;
}
