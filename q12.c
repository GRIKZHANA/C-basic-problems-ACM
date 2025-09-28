#include <stdio.h>

int main() {
    int a, b;

    // Take input from user
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Display results of arithmetic operations
    printf("\nResults of arithmetic operations:\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);    // integer division
    printf("%d %% %d = %d\n", a, b, a % b);   // modulus

    return 0;
}
