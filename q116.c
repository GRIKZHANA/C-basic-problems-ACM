#include <stdio.h>

int fact(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int n, r;
    scanf("%d %d", &n, &r);

    printf("%d", nCr(n, r));
    return 0;
}
