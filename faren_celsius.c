# include <stdio.h>
int main()
{
	float f,c;
	printf("enter farheinheit\n");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("F=%f\n",f);
	printf("C=%.3f",c);
	return 0;
}
