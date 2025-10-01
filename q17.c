 #include <stdio.h>

int main() {
    int a, b, remainder;

    printf("Enter two integers (dividend divisor): ");
    scanf("%d %d", &a, &b);

    remainder = a % b;

    printf("The remainder when %d is divided by %d is: %d\n", a, b, remainder);

    return 0;
}
