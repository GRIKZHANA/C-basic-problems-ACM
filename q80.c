#include <stdio.h>

int main() {
    char str[200];
    int upper = 0, lower = 0;

    scanf("%[^\n]", str);   // read full line (with spaces)

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
    }

    printf("Uppercase: %d\nLowercase: %d", upper, lower);

    return 0;
}
