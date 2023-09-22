#include <stdio.h>

// Define an enumeration representing the days of the week
enum DaysOfWeek {
    Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

int main() {
    int dayNumber;

    printf("Enter a day number (1 for Monday, 2 for Tuesday, etc.): ");
    scanf("%d", &dayNumber);

    if (dayNumber >= Monday && dayNumber <= Sunday) {
        printf("Day: ");
        switch (dayNumber) {
            case Monday:
                printf("Monday\n");
                break;
            case Tuesday:
                printf("Tuesday\n");
                break;
            case Wednesday:
                printf("Wednesday\n");
                break;
            case Thursday:
                printf("Thursday\n");
                break;
            case Friday:
                printf("Friday\n");
                break;
            case Saturday:
                printf("Saturday\n");
                break;
            case Sunday:
                printf("Sunday\n");
                break;
        }
    } else {
        printf("Invalid day number.\n");
    }

    return 0;
}
