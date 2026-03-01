#include<stdio.h>
int main()
{
	char a[30],word[30];
	int i,j=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			word[j]=a[i];
			j++;
		}
		else
		{
			word[j]='\0';
			printf("%s has %d letters\n",word,j);
			j=0;
			}
	}
	word[j]='\0';
	printf("%s has %d letters",word,j);
	return 0;
}
