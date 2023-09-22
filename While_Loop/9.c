#include <stdio.h>

int main() {
    int daysInMonth, dayOfWeek, i, day = 1;

    printf("Enter the number of days in the month (28, 30, or 31): ");
    scanf("%d", &daysInMonth);
    printf("Enter the day of the week for the first day (0 for Sunday, 1 for Monday, etc.): ");
    scanf("%d", &dayOfWeek);

    printf("\nSun Mon Tue Wed Thu Fri Sat\n");

    // Print leading spaces before the first day
    for (i = 0; i < dayOfWeek; i++) {
        printf("    ");
    }

    // Print days of the month
    while (day <= daysInMonth) {
        printf("%3d ", day);
        if ((day + dayOfWeek) % 7 == 0) {
            printf("\n");
        }
        day++;
    }

    printf("\n");

    return 0;
}
