# include<stdio.h>
int main()
{
	int P,T,R;
	float I;
	P=100000;
	T=24;
	R=2;
	I=(float)(P*T*R)/100;
	printf("principle amount = %d\n",P);
	printf("time in months = %d\n",T);
    printf("rate of intrest = %d\n",R);
    printf("simple intrest = %f\n",I);
}
