#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int candidate = -1;
    int count = 0;

    // Step 1: Find a candidate for the majority element
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify if the candidate is the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
    if (count > n / 2) {
        return candidate;
    }
    return -1; // No majority element found
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int majority = findMajorityElement(arr, n);
    printf("%d\n", majority);
    return 0;
}
