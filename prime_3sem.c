#include<stdio.h>
int main()
{
   int n,sum;
   
   printf("entr a number: \n");
   scanf("%d",&n);
   int x=n;
   while(x!=0)
   {
   	int num=x%10;
   	sum=sum*10+num;
   	x=x/10;
   }
   if(sum==n)
   {
   	printf("%d is palindrome",n);
   }
   else
   {
   	printf("%d is not palindrome",n);
   }
}
