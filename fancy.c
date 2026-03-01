#include <stdio.h>

int main() {
    int number;
    int digit, first_digit;
    int isFancy = 1;  


    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    
    if (number < 1000 || number > 9999) {
        printf("Please enter a valid four-digit number.\n");
        return 1; 
    }

    
    first_digit = number % 10; 
    number /= 10;               

    
    while (number > 0) {
        digit = number % 10; 
        if (digit != first_digit) {
            isFancy = 0; 
            break;       
        }
        number /= 10; 
    }

    
    if (isFancy) {
        printf("Fancy\n");
    } else {
        printf("Not a Fancy\n");
    }

    return 0;
}
