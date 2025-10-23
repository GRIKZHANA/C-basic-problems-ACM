#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Special case for 0
    if (num == 0)
        count = 1;
    else {
        while (num != 0) {
            num = num / 10;  // Remove last digit
            count++;         // Increase count
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}
