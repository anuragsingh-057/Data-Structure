#include <stdio.h>

int main() {
    int m, n;

    // Input sizes of arrays
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int arr1[m], arr2[n], merged_arr[m + n];

    // Input elements of arrays
    printf("Enter elements of first array (sorted):\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of second array (sorted):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0, k = 0;

    // Merge smaller elements first
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged_arr[k++] = arr1[i++];
        } else {
            merged_arr[k++] = arr2[j++];
        }
    }

    // Copy remaining elements, if any
    while (i < m) {
        merged_arr[k++] = arr1[i++];
    }
    while (j < n) {
        merged_arr[k++] = arr2[j++];
    }

    // Print merged array
    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged_arr[i]);
    }

    return 0;
}
