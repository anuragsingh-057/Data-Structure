#include <stdio.h>

int main() {
    int m, n;

    // Input sizes of arrays
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int arr1[m], arr2[n], union_arr[m + n];

    // Input elements of arrays
    printf("Enter elements of first array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of second array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int k = 0; // Index for union array

    // Add elements from first array to union array
    for (int i = 0; i < m; i++) {
        union_arr[k++] = arr1[i];
    }

    // Add unique elements from second array to union array
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < k; j++) {
            if (arr2[i] == union_arr[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            union_arr[k++] = arr2[i];
        }
    }

    // Print union array
    printf("Union of arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", union_arr[i]);
    }

    return 0;
}
