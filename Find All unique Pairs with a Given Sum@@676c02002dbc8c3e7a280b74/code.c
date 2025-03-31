#include <stdio.h>

void Sum(int arr[], int n, int T) {
    // Outer loop iterates over each element
    for (int i = 0; i < n; i++) {
        // Inner loop starts from i+1 to avoid duplicate pairs
        for (int j = i + 1; j < n; j++) {
            // Check if the sum of arr[i] and arr[j] equals T
            if (arr[i] + arr[j] == T) {
                printf("%d %d\n", arr[i], arr[j]); // Print the pair
            }
        }
    }
}

int main() {
    int n, T;
    // Input the size of the array
    scanf("%d", &n);

    int arr[n];
    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target sum
    scanf("%d", &T);

    // Call the function to find pairs
    Sum(arr, n, T);

    return 0;
}
