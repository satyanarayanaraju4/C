#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	
	if(ch>'A' && ch<='Z')
	{
		printf("%c is a uppercase\n",ch);
	}
	else
	{
		printf("%c is a lowercase\n",ch);
	}
	return 0;
	}
