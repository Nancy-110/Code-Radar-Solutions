#include <stdio.h>


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


