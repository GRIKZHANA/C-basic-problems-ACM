#include <stdio.h>

int main() {
    char ch;

    // Input
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Output ASCII value
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
