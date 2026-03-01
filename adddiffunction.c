#include<stdio.h>
void addtion(int,int);
int substraction(int,int);
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("control come from addtion function\n");
	
	int diff=substraction(x,y);
	printf("substraction = %d",diff);
	return 0;
}
int substraction(int m,int n)
{
	int diff=m-n;
	return diff;
}

