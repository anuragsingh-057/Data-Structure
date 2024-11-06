#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) {
        return false;  // Numbers less than or equal to 1 are not prime
    }

    // Check divisibility from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;  // num is divisible by i, hence not prime
        }
    }

    return true;  // num is prime
}

// Function to display prime numbers in a given range
void display_primes_in_range(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        if (is_prime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    // Input the range from the user
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    // Display prime numbers in the given range
    display_primes_in_range(start, end);

    return 0;
}

