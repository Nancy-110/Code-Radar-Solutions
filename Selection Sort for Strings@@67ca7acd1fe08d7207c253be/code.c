#include <stdio.h>
#include <string.h>

// Function to swap two elements
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform Selection Sort
void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int small = i; // Assume the first element is the smallest
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[small]) {
                small = j; // Update the index of the smallest element
            }
        }
        // Swap the smallest element with the first element of the unsorted part
        swap(&arr[i], &arr[small]);
    }
}

// Function to print the array
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    char arr[] = {'d', 'a', 'c', 'b', 'e'};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
