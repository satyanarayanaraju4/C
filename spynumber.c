#include<stdio.h>
int main()
{
	int n,sum=0,pro=1;
	scanf("%d",&n);
	while(n>0)
	{
		int rem=n%10;
		sum=sum+rem;
		pro=pro*rem;
		n=n/10;
	}
	if(sum==pro)
		{
			printf("it is a spy number");
		}
		else
		{
			printf("it is not spy number");
		}

	return 0;
}
