# include <stdio.h>
int main()
{
	float basic,da,hra,gross;
    scanf("%f",&basic);
	
	if(basic<=10000)
	{
		hra =basic*0.2;
		da  =basic*0.8;
	}
	else if(basic<=20000)
	{
		hra =basic*0.25;
		da  =basic*0.9;
	}
	else if(basic>20000)
	{
		hra =basic*0.3;
		da  =basic*0.95;
	}
	gross = basic+hra+da;
	printf("gross salary :%.2f\n",gross);
	return 0;
}
