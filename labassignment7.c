#include <stdio.h>

void bubble_sort_count_swaps(int arr[], int n, int swaps[]) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Increment the swap count for the corresponding indices
                swaps[j]++;
                swaps[j + 1]++;
            }
        }
    }
}

int main() {
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int swaps[n];

    // Initialize swap counts to 0
    for (int i = 0; i < n; ++i) {
        swaps[i] = 0;
    }

    bubble_sort_count_swaps(arr, n, swaps);

    printf("Number of swaps for each index:\n");
    for (int i = 0; i < n; ++i) {
        printf("Index %d: %d\n", i, swaps[i]);
    }

    return 0;
}
