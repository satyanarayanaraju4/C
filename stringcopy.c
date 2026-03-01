#include <stdio.h>

int main()
{   
   int f, i, l, m, x, n;
   
   printf("Enter array size: ");
   scanf("%d",&n);
   
   int arr[n];
   printf("Enter array elements: ");
   for(i = 0; i < n; i++)
   {
      scanf("%d",&arr[i]);
   }
   
   printf("Enter search value: ");
   scanf("%d",&x);
   
   f = 0;
   l = n - 1;
   
   while(f <= l)
   {
      m = (f + l) / 2; 
     
      if(arr[m] < x)
      {
         f = m + 1; 
      }
      else if(arr[m] == x)
      {
         printf("%d found at location %d\n", x, m + 1); 
         break;
      }
      else
      {
         l = m - 1; 
      }
   }
   
   if(f > l)
   {
      printf("Not found\n");
   }
   return 0;
}
