
#include <stdio.h>

int main() {
    int rows = 4; // Number of rows in the pattern
    char letter;  // Variable to hold the current letter for printing

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Set the starting letter for the current row
        letter = 'A' + i - 1;

        // Loop to print the letters in each row
        for (int j = 1; j <= i; j++) {
            printf("%c ", letter);  // Print the letter
            letter++;  // Move to the next letter
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
