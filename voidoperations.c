#include<stdio.h>
void addtion(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	addtion(x,y);
	subtraction(x,y);
	multiplication(x,y);
	division(x,y);
	return 0;
}
void addtion(int m,int n)
{
	int sum=m+n;
	printf("sum =%d\n",sum);
}
void subtraction(int m,int n)
{
	int diff=m-n;
	printf("diff =%d\n",diff);
}
void multiplication(int m,int n)
{
	int pro=m*n;
	printf("pro =%d\n",pro);
}
void division(int m,int n)
{
	if(n>0)
	{
		float div=(float)m/n;
		printf("div =%f\n",div);
		printf("division is possible");
	}
	else
	{
		printf("division is not possible");
}

}



