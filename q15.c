#include <stdio.h>

int main() {
    int num, absolute;

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    absolute = num * ((num > 0) - (num < 0));

    printf("Absolute value is: %d\n", absolute);

    return 0;
}
