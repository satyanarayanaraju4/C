# include<stdio.h>
int main()
{
	int x;
	printf("enter any integer as x\n");
	scanf("%d",&x);
	if((5%x==0) && (11%x==0))
	{
		printf("number is divisible by both 5 and 11\n");
		printf("task is completed");
	}
	else
	{
		printf("number is not divisible by 5 and 11\n");
		printf("task incomplete");
	}
	return 0;
}
