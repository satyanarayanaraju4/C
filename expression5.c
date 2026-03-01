#include <stdio.h>
#include <math.h>

int main() {
    int x; 
    int n,i;    
    int sum = 0; 

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
     for(i = 0; i <= n; i=i+2) {
        sum = sum+(int) pow(x, i);
    }

    printf("The value of the expression is: %d\n", sum);

    return 0;
}
