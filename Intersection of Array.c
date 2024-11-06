#include <stdio.h>

int main() {
    int m, n;

    // Input sizes of arrays
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int arr1[m], arr2[n], intersection_arr[m + n];

    // Input elements of arrays
    printf("Enter elements of first array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int k = 0; // Index for intersection array

    // Find intersection
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                int flag = 0;
                for (int l = 0; l < k; l++) {
                    if (intersection_arr[l] == arr1[i]) {
                        flag = 1;
                        break;
                    }
                }
                if (!flag) {
                    intersection_arr[k++] = arr1[i];
                }
            }
        }
    }

    // Print intersection array
    if (k == 0) {
        printf("No common elements found.");
    } else {
        printf("Intersection of arrays: ");
        for (int i = 0; i < k; i++) {
            printf("%d ", intersection_arr[i]);
        }
    }

    return 0;
}
