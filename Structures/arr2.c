#include <stdio.h>

// Define a structure to represent a date
struct Date {
    int day;
    int month;
    int year;
};

// Function to compare two dates
int compareDates(const struct Date *date1, const struct Date *date2) {
    if (date1->year < date2->year) return -1;
    if (date1->year > date2->year) return 1;
    if (date1->month < date2->month) return -1;
    if (date1->month > date2->month) return 1;
    if (date1->day < date2->day) return -1;
    if (date1->day > date2->day) return 1;
    return 0;
}

// Function to sort an array of dates
void sortDates(struct Date dates[], int numDates) {
    for (int i = 0; i < numDates - 1; i++) {
        for (int j = 0; j < numDates - i - 1; j++) {
            if (compareDates(&dates[j], &dates[j + 1]) > 0) {
                struct Date temp = dates[j];
                dates[j] = dates[j + 1];
                dates[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numDates;
    printf("Enter the number of dates: ");
    scanf("%d", &numDates);

    struct Date dates[numDates];

    // Input dates
    for (int i = 0; i < numDates; i++) {
        printf("Enter date (day month year) %d: ", i + 1);
        scanf("%d %d %d", &dates[i].day, &dates[i].month, &dates[i].year);
    }

    // Sort dates in chronological order
    sortDates(dates, numDates);

    // Print sorted dates
    printf("Sorted dates in chronological order:\n");
    for (int i = 0; i < numDates; i++) {
        printf("%d/%d/%d\n", dates[i].day, dates[i].month, dates[i].year);
    }

    return 0;
}
