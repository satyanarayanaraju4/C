#include <stdio.h>

int main() {
    int B1, B2, B3;

    // Input the state of the three bottles
    scanf("%d %d %d", &B1, &B2, &B3);

    // Count how many bottles are empty (0)
    int emptyCount = (B1 == 0) + (B2 == 0) + (B3 == 0);

    // Decision based on the number of empty bottles
    if (emptyCount >= 2) {
        printf("Water filling time\n");
    } else {
        printf("Not now\n");
    }

    return 0;
}



