#include <stdio.h>

int main() {
    int N, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = 2; i <= N; i += 2) {
        sum += i;
        if (i < N && i + 2 <= N)
            printf("%d + ", i);
        else
            printf("%d", i);
    }

    printf(" = %d\n", sum);

    return 0;
}
