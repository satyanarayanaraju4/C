# include <stdio.h>
# include <math.h>
int main()
{
	double a,b,c,i;
	double d,r1,r2;
	scanf("%lf%lf%lf",&a,&b,&c);
	
	d=b*b-4*a*c;
	if(d==0)
	{
		printf("roots are equal\n");
		r1=-b/(2*a);
		r2=-b/(2*a);
	}
	else if(d>0)
	{
		printf("roots are real numbers\n");
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
	}
	else
	{
		printf("roots are imaginary\n");
		r1=-b/(2*a)+i*(sqrt(-d))/(2*a);
		r2=-b/(2*a)-i*(sqrt(-d))/(2*a);
	}
	printf("root-1=%.2lf\n",r1);
	printf("root-2=%.2lf\n",r2);
	
	return 0;
}
