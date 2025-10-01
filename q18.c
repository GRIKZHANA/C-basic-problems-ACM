#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int sign = (num > 0) - (num < 0);
    // sign = 1 → Positive
    // sign = -1 → Negative
    // sign = 0 → Zero

    printf("Sign value: %d\n", sign);
    return 0;
}
