#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) {  // start from 2, since 1 is not prime
        isPrime = 1;  // assume i is prime

        for (j = 2; j <= i / 2; j++) {  // check divisibility
            if (i % j == 0) {
                isPrime = 0;  // not prime
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
