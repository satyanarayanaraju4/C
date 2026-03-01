#include <stdio.h>
#include <math.h>

int main() {
    int x; 
    int n,i;    
    double sum = 1.0; 

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
     for(i = 1; i <= n; i++) {
        sum = sum+1.0 / pow(x, i);
    }

    printf("The value of the expression is: %lf\n", sum);

    return 0;
}
