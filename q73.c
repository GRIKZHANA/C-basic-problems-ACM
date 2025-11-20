#include <stdio.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    int a=0,e=0,i=0,o=0,u=0;

    for(int idx=0; s[idx]; idx++){
        char c = s[idx];
        if(c=='a'||c=='A') a++;
        else if(c=='e'||c=='E') e++;
        else if(c=='i'||c=='I') i++;
        else if(c=='o'||c=='O') o++;
        else if(c=='u'||c=='U') u++;
    }

    printf("a:%d e:%d i:%d o:%d u:%d", a,e,i,o,u);
    return 0;
}
