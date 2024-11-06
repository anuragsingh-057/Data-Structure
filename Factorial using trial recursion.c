#include <stdio.h>

// Tail recursive function to calculate factorial
long long factorial_tail_recursive(int n, long long accumulator) {
    // Base case: If n is 0 or 1, return accumulator
    if (n <= 1) {
        return accumulator;
    } else {
        // Recursive call with reduced n and updated accumulator
        return factorial_tail_recursive(n - 1, n * accumulator);
    }
}

int main() {
    int number;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Ensure the number is non-negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the tail-recursive function with initial accumulator value of 1
        long long result = factorial_tail_recursive(number, 1);
        printf("Factorial of %d is: %lld\n", number, result);
    }

    return 0;
}

