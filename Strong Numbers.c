#include <stdio.h>

int main() {
    int N;

    // Input the upper limit N from the user
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Display all Strong numbers less than or equal to N
    printf("Strong numbers less than or equal to %d are:\n", N);

    for (int num = 1; num <= N; num++) {
        int sum = 0, temp, remainder;

        temp = num;

        // Loop through each digit of the number
        while (temp != 0) {
            remainder = temp % 10;

            // Calculate factorial of the digit
            int fact = 1;
            for (int i = 1; i <= remainder; i++) {
                fact *= i;
            }

            // Add factorial of the digit to the sum
            sum += fact;
            temp /= 10;
        }

        // If the sum of factorials equals the original number, it is a Strong number
        if (sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}

