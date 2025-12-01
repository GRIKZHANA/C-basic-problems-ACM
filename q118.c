#include <stdio.h>

void countEvenOdd(int arr[], int n, int *even, int *odd) {
    *even = *odd = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main() {
    int n, arr[100], even, odd;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    countEvenOdd(arr, n, &even, &odd);

    printf("Even: %d\nOdd: %d", even, odd);
    return 0;
}
