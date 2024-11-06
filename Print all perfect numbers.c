#include <stdio.h>

// Function to check if a number is perfect
int is_perfect_number(int num) {
    int sum = 0;

    // Find divisors of num and sum them up
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if sum of divisors equals the number itself
    return sum == num;
}

// Function to print all perfect numbers in a given range
void print_perfect_numbers_in_range(int start, int end) {
    printf("Perfect numbers between %d and %d are:\n", start, end);

    // Iterate over the range and check each number
    for (int num = start; num <= end; num++) {
        if (is_perfect_number(num)) {
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

    // Print all perfect numbers in the given range
    print_perfect_numbers_in_range(start, end);

    return 0;
}

