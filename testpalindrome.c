#include<stdio.h>
int palindrome(int);
int main()
{
	int n;
	scanf("%d",&n);
	int res=palindrome(n);
	printf("%d",res);
	  if(n==res)
	{
		printf("number is palindrome");
	}
	else 
	{
		printf("number is not palindrome");
	}
	return 0;
}
	int palindrome(int n)
	
	{
	int sum=0,rem;
	while(n>0)
	{   rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}

	return sum;
}
