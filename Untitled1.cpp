#include<stdio.h>
int finddigitscount(int );
int findigitscount(int n)
{
	int digits=0;
	while(n>0)
	{
		int rem =n%10;
		digits++;
		n=n/10;
	}
	return digits;
}
int main()
{
	int n;
	scanf("%d",&n);
	int count=findigitscount(n);
	printf("no of digits of a given nummber %d is:%d",n,count);
	return 0;
}
