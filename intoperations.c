#include<stdio.h>
int addtion(int,int);
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int res1=addtion(x,y);
	int res2=subtraction(x,y);
	int res3=multiplication(x,y);
	int res4=division(x,y);
	printf("div = %d\n",res4);
	printf("dif =%d\n",res2);
	printf("pro =%d\n",res3);
	printf("sum =%d\n",res1);
	return 0;
}
int addtion(int m,int n)
{
	int sum=m+n;
	return sum;
}
int subtraction(int m,int n)
{
	int dif=m-n;
	return dif;
}
int multiplication(int m,int n)
{
	int pro=m*n;
	return pro;
}
int division(int m,int n)
{
if(n>0)
{ 
   printf("division is possible\n");
	int div=m/n;
	return div;
} 
else 
{
	printf("division is not possible\n");
}
}
