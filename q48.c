#include <stdio.h>

int main() {
    int n, i, num;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }

    printf("\nNumber of positive numbers: %d", positive);
    printf("\nNumber of negative numbers: %d", negative);
    printf("\nNumber of zeros: %d\n", zero);

    return 0;
}
