#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    // Ensure K is within the bounds of the array
    k = k % n;

    // Print rotated array
    printf("Rotated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[(i + (n - k)) % n]);
    }
    printf("\n");
}

int main() {
    int n, k;

    // Input size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of rotations
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    // Call function to rotate array
    rotateArray(arr, n, k);

    return 0;
}
