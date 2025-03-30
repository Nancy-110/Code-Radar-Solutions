#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    // Ensure K is within the bounds of the array
    k = k % n;

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[(i + (n - k)) % n]);
    }

}

int main() {
    int n, k;

    // Input size of array
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of rotations
    scanf("%d", &k);

    // Call function to rotate array
    rotateArray(arr, n, k);

    return 0;
}
