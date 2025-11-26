#include <stdio.h>

int main() {
    long long bin;
    scanf("%lld", &bin);

    int dec = 0, base = 1;

    while(bin > 0) {
        int last = bin % 10;
        dec += last * base;
        base *= 2;
        bin /= 10;
    }

    printf("%d", dec);
    return 0;
}
