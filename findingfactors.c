#include<stdio.h>
int factors(int);
int main()
{
	int n;
	scanf("%d",&n);
	int fact_count=factors(n);
	printf("\nfactros of given number %d is: %d",n,fact_count);
	return 0;
}
int factors(int m)
{  
    int i,count=2;
    printf("1\n");

	for(i=2;i<=m/2;i++)
	{
		if(m%i==0)
		{
			printf("%d\n",i);
			count++;
		}
	}
	printf("%d",m);
	return count;
	
}
