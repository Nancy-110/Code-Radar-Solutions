#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i <= num / 2; i++) { // Check divisors from 2 to num/2
        if (num % i == 0) {
            return 0; // If divisible, not prime
        }
    }
    return 1; // If no divisors found, the number is prime
}

int main() {
    int t; // Number of test cases
    scanf("%d", &t);
    while (t--) {
        int num; // Number to check
        scanf("%d", &num);
        printf("%d\n", isPrime(num)); // Output 1 (prime) or 0 (not prime)
    }
    return 0;
}
