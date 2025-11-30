#include <stdio.h>

float c_to_f(float c) {
    return (c * 9/5) + 32;
}

int main() {
    float c;
    scanf("%f", &c);
    printf("%.2f", c_to_f(c));
    return 0;
}
