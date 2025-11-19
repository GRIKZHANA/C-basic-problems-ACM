#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ')
            result[j++] = str[i];
        i++;
    }

    result[j] = '\0';

    printf("%s", result);

    return 0;
}
