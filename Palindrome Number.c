#include <stdio.h>

int main() {
    int num, reverse = 0, remainder, original;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store original number
    original = num;

    // Reverse number
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    // Check palindrome
    if (original == reverse) {
        printf("%d is a palindrome.", original);
    } else {
        printf("%d is not a palindrome.", original);
    }

    return 0;
}

