#include <stdio.h>

int main() {
    int year;

    // Input year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.", year);
    } else {
        printf("%d is not a leap year.", year);
    }

    return 0;
}
