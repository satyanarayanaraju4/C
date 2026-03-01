#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=2;i<=10;i=i+2)
	{
		sum=sum+(i*i);
	}
	printf("sum squares of even numbers=%d",sum);
	return 0;
}
