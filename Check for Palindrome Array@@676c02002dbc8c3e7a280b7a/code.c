#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false; // Not a palindrome
        }
    }
    return true; // Palindrome
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isPalindrome(arr, n)) {
        printf("Yes\n"); // Array is a palindrome
    } else {
        printf("No\n"); // Array is not a palindrome
    }

    return 0;
}
