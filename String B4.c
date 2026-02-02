#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100], t[100];
    int j=0;
    gets(s);

    for(int i=0;s[i];i++)
        if(s[i]!=' ') t[j++]=tolower(s[i]);
    t[j]='\0';

    int l=0,r=j-1;
    while(l<r)
        if(t[l++]!=t[r--]) {
            printf("Not Palindrome");
            return 0;
        }
    printf("Palindrome");
    return 0;
}
