# include<stdio.h>
int main()

{

	float x1,y1,x2,y2,slope;
	printf("enter coordinate-1 (x1,y1):\n");
	scanf("%f%f",&x1,&y1);
	printf("enter coordinate-2 (x2,y2):\n");
	scanf("%f%f",&x2,&y2);
	slope=(y2-y1)/(x2-x1);
	printf("point-1=(%.2f,%.2f) point-2=(%.2f,%.2f) slope=%f\n",x1,y1,x2,y2,slope);
	return 0;
}
