#include <stdio.h>

int main() {
    int number, evenCount = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        int digit = number % 10;  
        if (digit % 2 == 0) {    
            evenCount++;
        }
        number /= 10;             
    }


    printf("The number of even digits is: %d\n", evenCount);

    return 0;
}
