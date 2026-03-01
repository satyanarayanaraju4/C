# include <stdio.h>
int main()
{ 
  char color_code;
  scanf("%c",&color_code);
  switch(color_code)
  { 
    case 'v':
    	printf("violet");
    	break;
    case 'i':
    	printf("indigo");
    	break;
    case 'b':
    	printf("blue");
    	break;
    case 'g':
    	printf("green");
    	break;
    case 'y':
    	printf("yellow");
    	break;
    case 'o':
    	printf("orange");
    	break;
    case 'r':
    	printf("red");
    	break;
    default :
    	printf("give a valid color-code");
    
  }
  return 0;
}
