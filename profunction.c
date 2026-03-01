#include<stdio.h>
void product(int,int);
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	product(x,y);
	return 0;
	
}
void product(int m,int n)
{
  int mul = m*n;	
  printf("%d",mul);
}
