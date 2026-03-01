# include <stdio.h>
int main()
{
	int x,y;
	int sum,dif,pro;
	float div;
	printf("enter x and y\n");
	scanf("%d%d",&x,&y);
	sum=x+y;
	dif=x-y;
	pro=x*y;
	div=x/y;
	printf("sum=%d\n",sum);
	printf("dif=%d\n",dif);
	printf("pro=%d\n",pro);
	printf("div=%f\n",div);
	return 0;
}
