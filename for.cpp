#include<stdio.h>
int main(){
	char N[10];
	int L;
	printf("Enter your lover name=");
	scanf("%s",&N);
	printf("How Many Time Print your name=");\
	scanf("%d",&L);
	for(int i=1;i<=L;i++){
		printf("%s\n",N);
	}
	return 0;
}
