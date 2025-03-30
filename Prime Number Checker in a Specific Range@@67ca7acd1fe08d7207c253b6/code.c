#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to print prime numbers in a range
void printPrimesInRange(int a, int b) {
    bool found = false;
    for (int num = a; num <= b; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
            found = true;
        }
    }
    if (!found) {
        printf("No prime numbers");
    }
}


    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

   printf("%d to %d:\n", a, b);
    printPrimesInRange(a, b);

    return 0;

