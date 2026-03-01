#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double s,area;
	printf("enter the sides\n");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("side -1=%d\n",a);
	printf("side -2=%d\n",b);
	printf("side -3=%d\n",c);
	printf("s=%lf\n",s);
	printf("area =%.2lf",area);

	return 0;
}
