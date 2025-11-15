#include <stdio.h>

int main() {
    int base, exponent;
    int result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    for (int i = 0; i < exponent; i++) {
        result *= base;  // multiply base repeatedly
    }

    printf("Result: %d\n", result);

    return 0;
}
