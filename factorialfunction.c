#include<stdio.h>
int fact(int);
int main()
{
	int n;
	scanf("%d",&n);
	int factorial=fact(n);
	printf("factorail of %d is : %d",n,factorial);
	return 0;
}
int fact(m)
{

int i,f=1;
    for(i=m;i>=2;i--)
	
    {
    	f=f*i;
	}
	return f;
}
