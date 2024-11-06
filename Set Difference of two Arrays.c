#include <stdio.h>

int main() {
    int m, n;

    // Input sizes of arrays
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int arr1[m], arr2[n], diff_arr[m];

    // Input elements of arrays
    printf("Enter elements of first array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int k = 0; // Index for difference array

    // Find set difference (A - B)
    for (int i = 0; i < m; i++) {
        int flag = 0;
        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            diff_arr[k++] = arr1[i];
        }
    }

    // Print set difference
    if (k == 0) {
        printf("The arrays are equal or the first array is a subset of the second.");
    } else {
        printf("Set difference (A - B): ");
        for (int i = 0; i < k; i++) {
            printf("%d ", diff_arr[i]);
        }
    }

    return 0;
}
