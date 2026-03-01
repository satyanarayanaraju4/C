# include <stdio.h>
int main()
{
	int eng,hin,mat,che,phy,total;
	double avg;
	scanf("%d%d%d%d%d",&eng,&hin,&mat,&che,&phy);
	total=eng+hin+mat+che+phy;
	avg=total/5.0;
	printf("total marks = %d\n",total);
	printf("average marks=%.2lf\n",avg);
	if(eng>=40 && hin>=40 && mat>=40 && phy>=40 && che>=40)
	{
		printf("you are pass in exam\n");
	}
	else if(eng<40 || hin<40 || mat<40 || che<40 || phy<40)
	{
		printf("you are failed in exam\n");
	}
	if(avg>=60)
	{
		printf("GRADE 'A' \n");
	}
	else if(avg>=50 && avg<60)
	{
		printf("GRADE 'B' \n");
	}
	else if(avg>=40 && avg<50)
	{
		printf("GRADE 'C'\n");
	}
	
	
	return 0;
}
