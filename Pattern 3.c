#include <stdio.h>

int main() {
    int rows = 4; // Number of rows in the pattern
    char letter = 'A'; // Starting letter

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Loop to print the letters in each row
        for (int j = 1; j <= i; j++) {
            printf("%c ", letter);
        }

        // Move to the next letter
        letter++;

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

