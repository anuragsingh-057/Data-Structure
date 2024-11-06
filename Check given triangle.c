#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Input sides of triangle
    printf("Enter first side: ");
    scanf("%d", &side1);
    printf("Enter second side: ");
    scanf("%d", &side2);
    printf("Enter third side: ");
    scanf("%d", &side3);

    // Validate triangle
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("Invalid triangle");
        return 0;
    }

    // Check triangle type
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral triangle");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles triangle");
    } else {
        printf("Scalene triangle");
    }

    return 0;
}
