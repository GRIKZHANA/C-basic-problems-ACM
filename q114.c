#include <stdio.h>
#include <string.h>

int isPalindrome(char s[]) {
    int i = 0;
    int j = strlen(s) - 1;

    while(i < j) {
        if(s[i] != s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main() {
    char s[100];
    scanf("%s", s);

    if(isPalindrome(s))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
