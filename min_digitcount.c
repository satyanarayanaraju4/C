#include<stdio.h>
#include<limits.h>
int main()
{
	int n;
	scanf("%d",&n);
	int digit,min_digit=9;
	while(n>0)
	{
		digit=n%10;
		if(digit<min_digit)
		{
			min_digit=digit;
		}
		n=n/10;
	}
	printf("%d",min_digit);
	return 0;
}
