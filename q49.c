#include <stdio.h>

int main(void) {
    int n;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 1) {
        printf("Please enter n >= 1.\n");
        return 0;
    }

    printf("\nNumber\tSquare\n");
    printf("----------------\n");

    for (int i = 1; i <= n; ++i) {
        long long sq = (long long)i * i;
        printf("%d\t%lld\n", i, sq);
    }

    return 0;
}
