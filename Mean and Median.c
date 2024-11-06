#include <stdio.h>
#include <stdlib.h>

// Function to calculate the mean
float calculate_mean(int numbers[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return (float)sum / size;
}

// Function to calculate the median
float calculate_median(int numbers[], int size) {
    // Sort the numbers in ascending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (numbers[i] > numbers[j]) {
                // Swap numbers[i] and numbers[j]
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // If the size is odd, the median is the middle number
    if (size % 2 != 0) {
        return numbers[size / 2];
    } else {
        // If the size is even, the median is the average of the two middle numbers
        return (float)(numbers[(size / 2) - 1] + numbers[size / 2]) / 2.0;
    }
}

int main() {
    int numbers[5];

    printf("Enter 5 numbers:\n");

    // Input 5 numbers from the user
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate mean and median using the functions
    float mean = calculate_mean(numbers, 5);
    float median = calculate_median(numbers, 5);

    // Display the results
    printf("\nMean: %.2f\n", mean);
    printf("Median: %.2f\n", median);

    return 0;
}

