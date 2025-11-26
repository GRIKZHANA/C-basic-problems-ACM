#include <stdio.h>

int main() {
    int dec;
    scanf("%d", &dec);

    int oct[20], i = 0;

    while(dec != 0) {
        oct[i++] = dec % 8;
        dec /= 8;
    }

    for(int j = i - 1; j >= 0; j--)
        printf("%d", oct[j]);

    return 0;
}
