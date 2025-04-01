#include <stdio.h>
#include <string.h>

// Function to swap two strings
void swap(char str1[], char str2[]) {
    char temp[100]; // Temporary array to hold one of the strings
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

// Bubble Sort function for strings
void bubbleSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap strings if they are in the wrong order
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to print an array of strings
void printArray(char arr[][100], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    char arr[n][100];

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    bubbleSort(arr, n); // Sort the strings

    printf("Sorted strings:\n");
    printArray(arr, n); // Print sorted strings

    return 0;
}
