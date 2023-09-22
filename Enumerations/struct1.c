#include <stdio.h>

// Define an enumeration for months
enum Month {
    January, February, March, April, May, June, July, August, September, October, November, December
};

// Define an enumeration for days of the week
enum DayOfWeek {
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};

// Define a structure representing a date
struct Date {
    int day;
    enum Month month;
    int year;
};

int main() {
    struct Date userDate;

    printf("Enter a date (day month year): ");
    scanf("%d %d %d", &userDate.day, (int *)&userDate.month, &userDate.year);

    if (userDate.month >= January && userDate.month <= December) {
        printf("Selected date: %d %s %d\n", userDate.day, (char *[]){"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}[userDate.month], userDate.year);
    } else {
        printf("Invalid month.\n");
    }

    return 0;
}
