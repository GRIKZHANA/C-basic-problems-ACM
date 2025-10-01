#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two boolean values (0 or 1): ");
    scanf("%d %d", &a, &b);

    // Logical AND
    int andResult = a && b;

    // Logical OR
    int orResult = a || b;

    printf("Logical AND of %d and %d = %d\n", a, b, andResult);
    printf("Logical OR of %d and %d = %d\n", a, b, orResult);

    return 0;
}
