# include<stdio.h>
int main()
{
	float a,b,c,sum;
	printf("enter angles of the triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	sum=a+b+c;
	if(sum==180)
	{
		printf("it is a valid triangle");
		printf("trianle is possible for %f %f %f",a,b,c);
	}
	else
	{
		printf("it is not valid triangle");
		}
	return 0;
}
