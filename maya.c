#include <stdio.h>
#include <math.h>

int main() {
    int R;
    double volume;

    scanf("%d", &R);

    volume = (4.0 / 3.0) * 3.14 * pow(R, 3);

    
    printf("%.2f\n", volume);

    return 0;
}
