#include <stdio.h>

int main() {
    int rows = 4; // Number of rows in the pattern
    int num = 1;  // Starting number

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

