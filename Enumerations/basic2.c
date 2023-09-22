#include <stdio.h>

// Define an enumeration for the months of the year
enum Months {
    January, February, March, April, May, June, July, August, September, October, November, December
};

int main() {
    int monthNumber;

    printf("Enter a month number (0 for January, 1 for February, etc.): ");
    scanf("%d", &monthNumber);

    if (monthNumber >= January && monthNumber <= December) {
        int daysInMonth;

        switch (monthNumber) {
            case January:
            case March:
            case May:
            case July:
            case August:
            case October:
            case December:
                daysInMonth = 31;
                break;
            case April:
            case June:
            case September:
            case November:
                daysInMonth = 30;
                break;
            case February:
                daysInMonth = 28; // Assuming non-leap year
                break;
        }

        printf("Number of days in the selected month: %d\n", daysInMonth);
    } else {
        printf("Invalid month number.\n");
    }

    return 0;
}
