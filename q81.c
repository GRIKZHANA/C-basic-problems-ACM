#include <stdio.h>

int main() {
    int n, a = 0, b = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
