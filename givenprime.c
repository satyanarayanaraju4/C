#include<stdio.h>
int findfactors(int);
int main(){
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	int fact_count=findfactors(n);
	printf(" the factors of give number %d is : %d\n",n,fact_count);
	if (fact_count==2){
   	printf("the %d is prime number",n);
   }
   else {
   	printf("the %d is not a prime number",n);
   }
	return 0;
}
int findfactors(int m){
	int count=2,i;
	printf("1\n");
	for(i=2;i<=m/2;i++){
		if(m%i==0){
			printf("%d\n",i);
			count ++;
		   	}
		}
	printf("%d\n",m);
     return count;
}

