#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum -= 1.0 / i;   // subtract for even i
        else
            sum += 1.0 / i;   // add for odd i
    }

    printf("Sum of the alternating harmonic series up to %d terms = %.6lf\n", n, sum);

    return 0;
}
