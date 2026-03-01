#include <stdio.h>

int main() {
    int number, evenCount = 0, oddCount = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    int temp = number;

    
    while (temp > 0) {
        int digit = temp % 10; 
        if (digit % 2 == 0) {    
            evenCount++;
        } else {                 
            oddCount++;
        }
        temp /= 10;              
    }

    if (evenCount == oddCount) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}





















