#include <stdio.h>

int maxInArray(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}

int main() {
    int n, arr[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", maxInArray(arr, n));
    return 0;
}
