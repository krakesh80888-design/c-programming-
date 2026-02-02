#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    gets(s);

    if(strchr(s,'@') && strchr(s,'.'))
        printf("Valid Email");
    else
        printf("Invalid Email");
    return 0;
}
