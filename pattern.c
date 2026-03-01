#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for( i=0;i<n;i++){
        for( j=0;j<i;j++){
            printf(" ");
        }
        char ch='A'+i;
        for( j=0;j<n-i;j++){
            if(j>0)
            {
                printf(" ");
            }
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;

}
