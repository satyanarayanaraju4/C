# include<stdio.h>
int main()
{
	int age;
	printf("enter your age:\n");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("hi! you are eligible for voting\n");
		printf("thank you for using my application\n");
		}
    else{
	printf("sorry! you are not eligible for voting\n");
	printf("you need to wait %d more years to get the vote\n",18-age);
    }
return 0;
}
