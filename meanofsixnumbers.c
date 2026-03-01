# include <stdio.h>
int main()
{
	int n1,n2,n3,n4,n5,n6,sum;
	float mean;
	printf("enter the 6 values\n");
	scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6);
	sum=n1+n2+n3+n4+n5+n6;
	mean=(float)sum/6;
	printf("mean = %.2f",mean);
	return 0;
}
