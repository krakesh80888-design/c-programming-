#include <stdio.h>

int main() {
    char s[100];
    gets(s);

    for(int i=0;s[i] && s[i]!='@';i++)
        printf("%c",s[i]);
    return 0;
}
