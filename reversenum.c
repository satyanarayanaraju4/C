#include<stdio.h>
int reversedigits(int);
int main()
{
	int n;
	scanf("%d",&n);
	int result=reversedigits(n);
	printf("%d",result);
	return 0;
	}
int reversedigits(n)
{
    int rem,sum=0;
	while(n>0)
	{    
		 rem=n%10;
		 sum=sum*10+rem;
		n=n/10;
	}
	
	return sum;
}
