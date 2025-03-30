#include <stdio.h>

// Function to find the first peak element in an array
int findFirstPeak(int arr[], int n) {
    // If array has only one element
    if (n == 1) {
        return 0;
    }
    
    // Check first element (only needs to be greater than right neighbor)
    if (arr[0] >= arr[1]) {
        return 0;
    }
    
    // Check middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i;
        }
    }
    
    // Check last element (only needs to be greater than left neighbor)
    if (arr[n - 1] >= arr[n - 2]) {
        return n - 1;
    }
    
    // If no peak found (all elements are equal)
    return -1;
}

int main() {
    int n;

    scanf("%d", &n);
    
    if (n <= 0) {
        return 1;
    }
    
    int arr[n];
    
    printf("%d", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int peakIndex = findFirstPeak(arr, n);
    
    if (peakIndex != -1) {
        printf("%d\n", arr[peakIndex]);
    } 
    
    return 0;
}