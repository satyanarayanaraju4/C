#include <stdio.h>

int main() {
    int t,i,j; 
    scanf("%d", &t);  

    for (i = 0; i < t; i++) {
        int n, m, s;
        scanf("%d %d %d", &n, &m, &s);  

        int current_position = s;  
       
        for ( j = 1; j < m; j++) {
            current_position++;  

            if (current_position > n) {
                current_position = 1;
            }
        }

        printf("%d\n", current_position);
    }

    return 0;
}
