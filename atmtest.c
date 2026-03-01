#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);

    if (amount % 100 != 0) {
        printf("Please Enter the amount is multiple of 100.\n");
        return 1; 
    }
    int notes_2000 = amount / 2000;
     int rem =amount % 2000;

    int notes_500 = rem / 500;
    int to=notes_500%500;

    int notes_100 = to / 100;
    
    int total_notes = notes_2000 + notes_500 + notes_100;
    printf("Total notes dispensed: %d\n", total_notes);
    printf("Breakdown:\n");
    printf("?2000 notes: %d\n", notes_2000);
    printf("?500 notes: %d\n", notes_500);
    printf("?100 notes: %d\n", notes_100);

    return 0;
}
