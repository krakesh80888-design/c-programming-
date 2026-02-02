#include <stdio.h>
#include <ctype.h>

int main() {
    char s[50];
    int u=0,l=0,d=0,sp=0;
    gets(s);

    for(int i=0;s[i];i++) {
        if(isupper(s[i])) u=1;
        else if(islower(s[i])) l=1;
        else if(isdigit(s[i])) d=1;
        else sp=1;
    }

    if(u&&l&&d&&sp)
        printf("Strong Password");
    else
        printf("Weak Password");
    return 0;
}
