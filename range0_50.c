# include<stdio.h>
int main()
{
	int n;
	printf("enter any integer\n");
	scanf("%d",&n);
	if(n>=0 && n<=10)
	{
		printf("range in between[0,10]");
	}
	else if(n>10 && n<=20)
	{
		printf("range in between(10,20]");
	}
	else if(n>20 && n<=30)
	{
		printf("range in between(20,30]");
	}
	else if(n>30 && n<=40)
	{
		printf("range in between(30,40]");
	}
	else if(n>40 && n<=50)
	{
		printf("range in between(40,50]");
	}
	else
	{
		printf("any outside range number");
	}
	return 0;
}
