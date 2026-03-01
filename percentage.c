# include <stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5,average,total,percentage;
	printf("enter the marks of subjects\n");
	scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	average=total/5;
	percentage=total/500*100;
	printf("sub-1 =%.2f\n",sub1);
	printf("sub-2=%.2f\n",sub2);
	printf("sub-3=%.2f\n",sub3);
	printf("sub-4=%.2f\n",sub4);
	printf("sub-5=%.2f\n",sub5);
	
	printf("average marks =%.2f\n",average);
	printf("percentage = %.2f\n",percentage);
	return 0;
}
