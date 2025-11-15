#include <stdio.h>

int main() {
    int n, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  // store original number

    while (n > 0) {
        digit = n % 10;        // extract last digit
        rev = rev * 10 + digit; // reverse number
        n /= 10;
    }

    if (rev == original)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
