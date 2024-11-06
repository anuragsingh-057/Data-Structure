#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input two numbers from the user
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Use the Euclidean algorithm to find the GCD
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;  // Calculate remainder
        num1 = temp;          // Set num1 to the previous num2
    }

    // num1 now holds the GCD of the two numbers
    printf("GCD of the two numbers is: %d\n", num1);

    return 0;
}

