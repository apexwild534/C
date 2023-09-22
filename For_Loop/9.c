#include <stdio.h>

int main() {
    int month, year, daysInMonth, startingDay;

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    // Determine the number of days in the given month
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else if (month == 2) {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    } else {
        daysInMonth = 31;
    }

    // Determine the starting day (0=Sunday, 1=Monday, ..., 6=Saturday)
    startingDay = (year - 1 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + 1) % 7;

    printf("\nCalendar for %d/%d\n", month, year);
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    for (int i = 0; i < startingDay; i++) {
        printf("    ");
    }

    for (int day = 1; day <= daysInMonth; day++) {
        printf("%3d ", day);
        if ((startingDay + day) % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}
