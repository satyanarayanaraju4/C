#include<stdio.h>
int main()
{
	int size,pos,ele;
	printf("enter the size of array:");
	scanf("%d",&size);
	int arr[size],i;
	printf("enter %d elements \n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to insert");
	scanf("%d",&ele);
	printf("eneter the index position to insert:");
	scanf("%d",&pos);
	if(pos<0||pos>size)
	{
		printf("invalid position\n");
		return 1;
	}
	for(i=size;i>pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=ele;
	printf("array after insertion :\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
