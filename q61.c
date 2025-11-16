#include <stdio.h>

int main() {
    int n = 7;
    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
