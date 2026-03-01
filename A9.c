#include<stdio.h>
void quicksort(int arr[],int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(arr[i]<=arr[pivot] && i<j)
			i++;
			while(arr[j]>arr[pivot])
			j--;
			if(i<j)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		temp=arr[j];
		arr[j]=arr[pivot];
		arr[pivot]=temp;
		quicksort(arr,first,j-1);
		quicksort(arr,j+1,last);
	}
}
int main()
{
	int arr[20];
	int i,n;
	printf("enter size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	quicksort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
