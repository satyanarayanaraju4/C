#include<stdio.h>
int diffrence(int);
int main()
{   
     int n;
     scanf("%d",&n);
     int res=diffrence(n);
     printf("diffrence=%d",res);
     return 0;
 }
 int diffrence(m)
 {
 
	int sum=0,pro=1,rem,diff;
	while(m>0)
	{
		rem=m%10;
		sum=sum+rem;
		pro=pro*rem;
		m=m/10;
	}
	printf("sum=%d\n",sum);
	printf("pro=%d\n",pro);
	diff=pro-sum;
	
	return diff;
}
