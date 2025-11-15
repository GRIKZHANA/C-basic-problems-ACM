#include <stdio.h>

int main() {
    int a = 7, b = 5;
    int result = 0;

    for (int i = 0; i < b; i++) {
        result += a;   // add 'a' repeatedly 'b' times
    }

    printf("Result: %d\n", result);
    return 0;
}
