#include<stdio.h>
int main()
{
	int i,n,a,found=0,pos=0;
	scanf("%d ",&n);
	int arr[n];
	for(i=0;i<n;i++)
	
	{
		scanf("%d",&arr[i]);
	}
	printf("enter any number to check");
	scanf("%d",&a);
    for(i=0;i<n;i++)
    {
    	if(arr[i]==a)
    	{
    	  found=1;
    	  pos=i;
    	  break;
			}
		
	}
	if(found==1)
      {
		  printf("%d is found at %d index in the given array",a,pos);
      }
	  else if(found!=1)
	  {
		  	printf("%d is not found in the given array",a);
       }   
	return 0;
}
