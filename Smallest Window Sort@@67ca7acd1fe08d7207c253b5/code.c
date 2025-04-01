#include <stdio.h>
int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1, max = arr[0], min = arr[n-1];

    // Find the end of the unsorted subarray
    for (int i = 0; i < n; i++) {
        if (arr[i] < max) {
            end = i;
        } else {
            max = arr[i];
        }
    }

    // Find the start of the unsorted subarray
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > min) {
            start = i;
        } else {
            min = arr[i];
        }
    }

    if (start == -1) {
        return 0; // The array is already sorted
    }

    return end - start + 1;
}
