#include <stdio.h>

int gcd(int a, int b) {
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int g = gcd(x, y);
    int l = (x * y) / g;

    printf("%d", l);
    return 0;
}
