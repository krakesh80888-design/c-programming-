#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    gets(s);
    int l=0,r=strlen(s)-1,del=0;

    while(l<r) {
        if(s[l]==s[r]) { l++; r--; }
        else { del++; r--; }
    }
    printf("%d", del);
    return 0;
}
