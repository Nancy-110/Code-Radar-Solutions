#include <stdio.h>
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
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
