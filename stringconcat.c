#include<stdio.h>
int main()
{
	char a[30],b[30],c[50];
	printf("enter any two strings\n");
	gets(a);
	gets(b);
	int i,j=0;
	for(i=0;a[i]!='\0';i++)
	{
		c[j]=a[i];
		j++;
	}
	c[j]=' ';
	j++;
	for(i=0;b[i]!='\0';i++)
	{
		c[j]=b[i];
		j++;
	}
	c[j]='\0';
	printf("first string %s: \n",a);
	printf("second string %s: \n",b);
	printf("concatenated string %s: \n",c);
	return 0;
}
