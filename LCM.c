#include <stdio.h>

int main() {
    int num1, num2, lcm;

    // Input two numbers from the user
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Find the maximum of num1 and num2 to start checking from there
    int max = (num1 > num2) ? num1 : num2;

    // Loop to find the LCM
    for (lcm = max; lcm <= num1 * num2; lcm++) {
        // Check if lcm is divisible by both num1 and num2
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;  // Found the LCM
        }
    }

    // Display the result
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}

