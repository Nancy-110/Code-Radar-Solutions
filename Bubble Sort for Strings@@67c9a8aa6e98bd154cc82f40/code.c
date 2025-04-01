#include <stdio.h>
3include <string.h>
void bubbleSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  // Swap if the element is greater
                char temp[100] = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp[100];
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}