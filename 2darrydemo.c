#include<stdio.h>
int main()
{
	int row,cols,i,j;
	scanf("%d%d",&row,&cols);
	int arr[row][cols];
	printf("enter %d elements \n",row*cols);
	for(i=0;i<row;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<cols;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
