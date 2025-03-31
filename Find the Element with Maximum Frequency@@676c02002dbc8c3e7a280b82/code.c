#include <stdio.h>

void findMaximumFrequencyElement(int arr[], int n) {
    int maxFrequency = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFrequency || (count == maxFrequency && arr[i] < maxElement)) {
            maxFrequency = count;
            maxElement = arr[i];
        }
    }

    printf("%d\n", maxElement);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMaximumFrequencyElement(arr, n);
    return 0;
}
