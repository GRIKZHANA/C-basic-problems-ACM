#include <stdio.h>

int main() {
    int base, exp;
    long long result = 1;

    scanf("%d %d", &base, &exp);

    for(int i = 1; i <= exp; i++)
        result *= base;

    printf("%lld", result);
    return 0;
}
