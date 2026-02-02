#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int u=0,l=0,d=0,sp=0;
    gets(s);

    for(int i=0; s[i]; i++) {
        if(isupper(s[i])) u++;
        else if(islower(s[i])) l++;
        else if(isdigit(s[i])) d++;
        else sp++;
    }

    printf("Uppercase=%d\nLowercase=%d\nDigits=%d\nSpecial=%d",
            u,l,d,sp);
    return 0;
}
