#include<stdio.h>
int main()
{
   int n,sum=0;
   scanf("%d",&n);
   int i;
   for(i=1;i<=n;i++)
   {
       sum=sum+(i*i);
   }
   printf("Sum of Squares of %d natural numbers = %d",n,sum);
   return 0;
}

