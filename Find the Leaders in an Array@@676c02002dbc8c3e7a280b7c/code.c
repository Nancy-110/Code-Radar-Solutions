#include <stdio.h>

void findLeaders(int arr[], int n) {
    int max = arr[n - 1]; // Start with the last element
    int leaders[n];
    int count = 0;

    // Traverse from right to left to identify leaders
    for (int i = n - 1; i >= 0; i--) {
        leaders[count++] = arr;
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
