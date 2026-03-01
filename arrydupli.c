#include<stdio.h>
int main()
{
	int n,i,j=1,k,av=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int temp[n];
	temp[0]=arr[0];
	
    for(i=1;i<n;i++)
    {
    	av=0;
    	for(k=0;k<j;k++)
    	{
    		if(arr[i]==temp[k])
    		{
    			av=1;
    			break;
			}
		}
		if(av==0)
		{
			temp[j]=arr[i];
			j++;
		}
	}
	printf("elements in the arry\n");
     for(i=0;i<n;i++)
     
     	printf("%d ",arr[i]);
     	
     	printf("\nelements after removing of duplicate elements\n");
     	for(i=0;i<j;i++)
     	printf("%d",temp[i]);
	 
	return 0;
}
