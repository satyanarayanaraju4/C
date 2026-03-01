# include <stdio.h>
int main()
{
	int P,T,R;
	float I;
	printf("enter principle,time and rate of interst\n");
	scanf("%d%d%d",&P,&T,&R);
	I=(P*T*R)/100;
	printf("P=%d T=%d R=%d",P,T,R);
	printf("simple intrest =%f",I);
}
