#include <stdio.h>

int main() {
    int n, temp, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Find the divisor (like 1000 for 1234)
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }

    // Print digits using divisor
    while (divisor > 0) {
        printf("%d ", n / divisor);
        n = n % divisor;
        divisor /= 10;
    }

    return 0;
}
