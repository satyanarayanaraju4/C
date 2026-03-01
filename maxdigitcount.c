#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int digit,max_digit=0;
    while(n>0)
    {
    	digit=n%10;
    	if(digit>max_digit)
    	{
    		max_digit=digit;
		}
    	n=n/10;
	}
	printf("%d",max_digit);
	return 0;
}
