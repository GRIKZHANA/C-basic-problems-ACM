#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int *p = &x;

    printf("Value: %d\n", *p);
    printf("Address: %p", p);

    return 0;
}
