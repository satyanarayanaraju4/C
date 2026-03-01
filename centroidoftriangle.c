# include <stdio.h>
int main()
{
	int x1,x2,x3,y1,y2,y3;
	float x,y;
	printf("enter the x and y coordinate of point-1\n");
	scanf("%d%d",&x1,&y1);
	printf("enter the x and y coordinate of point-2\n");
	scanf("%d%d",&x2,&y2);
	printf("enter the x and y coordinate of point-3\n");
	scanf("%d%d",&x3,&y3);
	
	x=(x1+x2+x3)/3.0;
	y=(y1+y2+y3)/3.0;
	printf("centroid of triangle (x,y) is :(%f,%f)",x,y);
	return 0;
}
