#include <stdio.h>

// Function to check if a year is a leap year
int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to find the weekday
int find_weekday(int day, int month, int year) {
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 3;
    return (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
}

// Function to print the weekday
void print_weekday(int weekday) {
    switch (weekday) {
        case 0: printf("Sunday"); break;
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
    }
}

int main() {
    int day, month, year;

    // Input date
    printf("Enter day (1-31): ");
    scanf("%d", &day);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Validate date
    if (day < 1 || day > 31 || month < 1 || month > 12) {
        printf("Invalid date");
        return 0;
    }
    if (month == 2 && (day > 29 || (day == 29 && !is_leap_year(year)))) {
        printf("Invalid date");
        return 0;
    }

    // Find weekday
    int weekday = find_weekday(day, month, year);

    // Print weekday
    printf("Weekday: ");
    print_weekday(weekday);

    return 0;
}
