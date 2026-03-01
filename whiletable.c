#include<stdio.h>
int main()
{
	int i,n,a;
	scanf("%d",&n);
	i=1;
	while(i<=10)
	{
	   int a=i*n;
	   printf("%d x %d =%d\n",n,i,a);
	   i++;
	}
	return 0;
}
