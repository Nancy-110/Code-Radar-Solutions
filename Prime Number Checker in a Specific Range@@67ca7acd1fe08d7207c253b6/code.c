#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime  
bool isPrime(int n) {
    if (n <= 1){
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


