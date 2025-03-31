#include <stdio.h>

void Sum(int arr[], int n, int T) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Start j from i + 1 to avoid repetition
            if (arr[i] + arr[j] == T) { // Compare the sum of values, not indices
                printf("%d %d\n", arr[i], arr[j]); // Print the pair
            }
        }
    }
}

int main() {
    int n, T;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &T);
    Sum(arr, n, T);
    return 0;
}
