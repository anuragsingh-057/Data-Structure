#include <stdio.h>

int main() {
    int lower, upper;

    // Input range
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d:\n", lower, upper);

    for (int i = lower; i <= upper; i++) {
        int original = i;
        int sum = 0;
        int digitCount = 0;
        int temp = i;

        // Count digits
        while (temp != 0) {
            temp /= 10;
            digitCount++;
        }

        // Calculate Armstrong sum
        temp = i;
        while (temp != 0) {
            int digit = temp % 10;
            sum += (int) (digit * pow(digit, digitCount));
            temp /= 10;
        }

        // Check Armstrong
        if (sum == original) {
            printf("%d\n", original);
        }
    }

    return 0;
}
