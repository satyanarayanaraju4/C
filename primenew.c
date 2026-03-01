#include<stdio.h>
int main()
{
	int x,y,i;
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++)
	{
		int count=2,i;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			count++;
		}
	}
		if(count==2)
		   printf("%d\n",i);
	}
	return 0;
}



