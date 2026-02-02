#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int k;
    gets(s);
    scanf("%d",&k);

    for(int i=0;s[i];i++)
        if(isalpha(s[i]))
            s[i] = ((s[i]-'a'+k)%26)+'a';

    puts(s);
    return 0;
}
