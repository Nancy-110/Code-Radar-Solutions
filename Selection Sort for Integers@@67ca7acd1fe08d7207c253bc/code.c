#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Find the smallest element in the unsorted part of the array
        int small = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[small]) {
                small = j; // Update index of the smallest element
            }
        }
        // Swap the smallest element with the first element of the unsorted part
        int temp = arr[small];
        arr[small] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

