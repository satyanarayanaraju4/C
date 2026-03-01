#include<stdio.h>
int main()
{
	char ope;
	double num1,num2,res;
	printf("enetr operator\n");
	scanf("%c",&ope);
	printf("enetr two numbers\n");
	scanf("%lf %lf",&num1,&num2);
	switch(ope)
	{
		case '+':
			res=num1+num2;
			printf("%.2lf",res);
			break;
		case '-':
			res=num1-num2;
			printf("%.2lf",res);
			break;
		case '*':
			res=num1*num2;
			printf("%.2lf",res);
			break;
		case '/':
			if(num2!=0)
			{
				res=num1/num2;
				printf("%.2lf",res);
			}
			else
			{
				printf("division not possible");
			}
			break;
		default :
			printf("eneter a valid operator(+,-,*,/)");
			
	}
	return 0;
}
