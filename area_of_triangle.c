#include<stdio.h>
int main()
{
	int b,h;
	float a;
	printf("enter breadth and height\n");
	scanf("%d%d",&b,&h);
	a=(1.0f/2)*b*h;
	printf("breadth=%d",b);
	printf("height=%d",h);
	printf("area=%f",a);
	
}
