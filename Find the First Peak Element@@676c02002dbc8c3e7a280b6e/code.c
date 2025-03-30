#include <stdio.h>

// Function to find the first peak element
int findFirstPeak(int arr[], int n) {
    // Agar array mein ek hi element hai
    if (n == 1) {
        return 0;
    }

    // Pehla element ko check karo (sirf right neighbor ko compare karo)
    if (arr[0] >= arr[1]) {
        return 0;
    }

    // Beech wale elements check karo
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i;
        }
    }

    // Aakhri element ko check karo (sirf left neighbor ko compare karo)
    if (arr[n - 1] >= arr[n - 2]) {
        return n - 1;
    }

    // Agar koi peak nahi mila
    return -1;
}

int main() {
    int n;

    // User se array size input lena
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        return 1;
    }

    int arr[n];

    // User se array elements input lena
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // First peak element ka index dhundhna
    int peakIndex = findFirstPeak(arr, n);

    if (peakIndex != -1) {
        printf("%d\n", arr[peakIndex]);
    } 

    return 0;
}
