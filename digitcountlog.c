#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int count=(int)log10(n)+1;
	printf("%d",count);
	return 0;
}
