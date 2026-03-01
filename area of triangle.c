#include<stdio.h>
#include<math.h>
int main()
{	float a,b,c;
	float s,area;	
	printf("Enter the sides of the Triangle\n");
	scanf("%f%f%f",&a,&b,&c);

	s=(a+b+c)/2.0;
	printf("s=%f",s);
	area=(float)sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("Sides of the Triangle are:\n");
	printf("Side -1 = %f\n",a);
	printf("Side -2 = %f\n",b);
	printf("Side -3 = %f\n",c);
	printf("Area of the Triangle is: %f",area);
	
	return 0;
}

