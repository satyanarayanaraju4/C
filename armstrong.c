#include<stdio.h>
#include<math.h>
int findarmstrongcalculation(int);
int main()
{  
     int n,res;
     scanf("%d",&n);
     res=findarmstrongcalculation(n);
     printf("armstrong number=%d\n",res);
     if(n==res)
     {
	 printf("given number %d is armstrong",n);
    }  
     else
     {
	 
	 printf("given number %d is not armstrong",n);
}
     return 0;
}
int findarmstrongcalculation(int n)
{
	int digits=(int)log10(n)+1;
	int rem,sum=0;
	int original=n;
	while(n>0)
	{
		rem =n%10;
		sum=sum+(int)pow(rem,digits);
		n=n/10;
	}
	
	return sum;
}
