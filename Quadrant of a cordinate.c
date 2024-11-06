#include <stdio.h>

int main() {
    int x, y;

    // Input coordinate point
    printf("Enter x-coordinate: ");
    scanf("%d", &x);
    printf("Enter y-coordinate: ");
    scanf("%d", &y);

    // Determine quadrant
    if (x == 0 && y == 0) {
        printf("Origin");
    } else if (x == 0) {
        printf("Y-axis");
    } else if (y == 0) {
        printf("X-axis");
    } else if (x > 0 && y > 0) {
        printf("Quadrant I");
    } else if (x < 0 && y > 0) {
        printf("Quadrant II");
    } else if (x < 0 && y < 0) {
        printf("Quadrant III");
    } else {
        printf("Quadrant IV");
    }

    return 0;
}

