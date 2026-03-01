#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x>=0 && x<=2)
	{
		printf("Infant");
	}
	else if(x>2 && x<=12)
	{
		printf("child");
	}
	else if(x>12 && x<=19)
	{
		printf("Teen");
	}
	else if(x>19 && x<=64)
	{
		printf("Adult");
	}
	else if(x>64)
	{
		printf("Senior");
	}
	return 0;
	
}
