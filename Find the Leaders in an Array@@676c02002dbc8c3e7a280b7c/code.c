#include <stdio.h>

void findLeaders(int arr[], int n) {
    int leaders[n]; // To store leaders
    int count = 0; // Counter for the number of leaders
    int maxFromRight = arr[n - 1]; // The last element is always a leader
    leaders[count++] = maxFromRight;

    // Traverse the array from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {
            maxFromRight = arr[i];
            leaders[count++] = maxFromRight; // Add leader to the array
        }
    }

    // Print leaders in the correct order (reverse of insertion order)
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findLeaders(arr, n);
    return 0;
}
