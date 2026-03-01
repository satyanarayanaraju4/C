#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,x;
	double sum=1.0;
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+1.0/pow((-x),i);
	}
	printf("%lf",sum);
	return 0;
	
}
