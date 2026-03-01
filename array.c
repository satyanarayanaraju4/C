#include<stdio.h>
int main()
{
	int marks[6]={62,34,89,97,50,78};
	// using without any loop
	printf("%d\n",marks[0]);
	printf("%d\n",marks[1]);
	printf("%d\n",marks[2]);
	printf("%d\n",marks[3]);
	printf("%d\n",marks[4]);
	printf("%d\n",marks[5]);
	// using  loop
	int i,sum=0;
	for(i=0;i<6;i++)
	{
		printf("%d ",marks[i]);
		sum=sum+marks[i];
	}
	printf("\ntotal marks=%d",sum);
	return 0;
}
