#include<stdio.h>
int main()
{
	double C,F,K;
	int option;
	printf("1.celsius to fahrenheit\n2. fahrenheit to celsius\n3. celsius to kelvin\n");
	printf("enter your choice(1-3)\n");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			printf("enter the value of C:\n");
			scanf("%lf",&C);
			F=(double)(C*9)/5 + 32;
			printf(" C = %.2lf and F = %.2lf",C,F);
			break;
		case 2:
			printf("enter the value of F:");
			scanf("%lf",&F);
			C= (F-32)*(5.0)/9;
			printf(" F = %.2lf and C= %.2lf",F,C);
			break;
		case 3:
			printf("enter the value of C:");
			scanf("%lf",&C);
			K=C+273.15;
			printf("C = %.2lf and K=%.2lf",C,K);
			break;
		default:
			printf("enter the valid option");
			}
			return 0;
}
