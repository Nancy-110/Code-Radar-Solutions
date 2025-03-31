#include <stdio.h>
int findFirstPeak(int arr[], int n) {
    if (n == 1) {
        return 0;
    }

    // First element must be strictly greater than the next
    if (arr[0] > arr[1]) {
        return 0;
    }

    // Middle elements must be strictly greater than both neighbors
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return i;
        }
    }

    // Last element must be strictly greater than the previous
    if (arr[n - 1] > arr[n - 2]) {
        return n - 1;
    }
    return -1;
}

int main() {
    int n;

    // User se array size input lena

    scanf("%d", &n);

    if (n <= 0) {
        return 1;
    }

    int arr[n];

    // User se array elements input lena
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // First peak element ka index dhundhna
    int peakIndex = findFirstPeak(arr, n);

    if (peakIndex != -1) {
        printf("%d\n", arr[peakIndex]);
    } 

    return 0;
}