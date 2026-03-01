# include<stdio.h>
int main()
{
	char color_code;
	
	scanf("%c",&color_code);
	switch(color_code)
	{ 
	case 'R':
		printf("stop....");
		break;
	case 'Y':
	printf("slow down ...");
	break;
	case 'G':
	printf("go...");
	break;
	default:
		printf("not matched");
	}
	return 0;
}
