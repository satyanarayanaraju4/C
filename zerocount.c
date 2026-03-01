#include <stdio.h>

int main() {
    int number;  
    int count = 0;    


    printf("Enter a number: ");
    scanf("%d", &number);

    
    while (number >0) {
    	int rem=number%10;
        if (rem%10 == 0) {
            count++;  
        }
        number =number/ 10;  
    }

    printf("Number of zeros: %d\n", count);
    return 0;
}
