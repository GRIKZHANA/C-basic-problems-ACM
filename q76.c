#include <stdio.h>

int largest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    printf("%d", largest(x, y, z));

    return 0;
}
