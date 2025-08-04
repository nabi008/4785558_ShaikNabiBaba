#include <stdio.h>
int main() {
    int day;
    char choice;
    do {
        printf("Enter the number from 1-7\n");
        printf("Enter the day: ");
        scanf("%d", &day);
        switch(day) {
            case 1: printf("Monday\n"); break;
            case 2: printf("Tuesday\n"); break;
            case 3: printf("Wednesday\n"); break;
            case 4: printf("Thursday\n"); break;
            case 5: printf("Friday\n"); break;
            case 6: printf("Saturday\n"); break;
            case 7: printf("Sunday\n"); break;
            default: printf("Please enter a valid number\n");
        }
        printf("\nDo you want to try again? (y/n): ");
        scanf(" %c", &choice);
        printf("\n");
    } while (choice == 'y' || choice == 'Y');
    printf("Exiting program.\n");
    return 0;
}