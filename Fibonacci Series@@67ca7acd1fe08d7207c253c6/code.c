#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, nextTerm;

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
}
