#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // User se number input karna
    printf("Ek number daaliye: ");
    scanf("%d", &num);

    // Check karna agar number 1 ya usse chhota hai
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Loop use karke number ko check karna
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Result print karna
    if (isPrime) {
        printf("%d ek prime number hai.\n", num);
    } else {
        printf("%d ek prime number nahi hai.\n", num);
    }

    return 0;
}
