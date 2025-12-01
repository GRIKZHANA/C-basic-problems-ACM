#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;

    // count digits
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0) {
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n;
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
