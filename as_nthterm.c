# include <stdio.h>
int main ()
{ 
int n,a,d,Nth_term;
scanf("%d%d%d",&n,&a,&d);
Nth_term = a+(n-1)*d;
printf("n=%d a=%d d=%d",n,a,d);
printf("nth term=%d",Nth_term);
return 0;
}
