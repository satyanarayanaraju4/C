# include <stdio.h>
int main ()
{
	int x,y,sum,diff,prod,div;
	printf("enter x value:\n");
	scanf("%d",&x);
	printf("enter y value:\n");
	scanf("%d",&y);
	sum=x+y;
	diff=x-y;
	prod=x*y;
	div=x/y;
	printf("sum = %d\n",sum);
	printf("dif = %d\n",diff);
	printf("mul = %d\n",prod);
	printf("div = %d\n",div);
	return 0;
}
