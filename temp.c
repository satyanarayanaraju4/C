# include<stdio.h>
int main()
{
	int temp;
	scanf("%d",&temp);
	if(temp<0)
	{
		printf("freezing point");
	}
	else if(temp>=0 && temp<=10)
	{
	printf("very cool point");
	}
	else if(temp>10 && temp<=20)
	{
		printf("cool point");
	}
	else if(temp>20 && temp<=30)
	{
		printf("normal point");
	}
	else if(temp>30 && temp<=40)
	{
	printf("hot point");
}
	else
{
		printf("its very hot");
		}
		return 0;
}
