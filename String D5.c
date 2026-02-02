#include <stdio.h>
#include <string.h>

int main() {
    char s[20];
    gets(s);
    int n=strlen(s);

    for(int i=0;i<n-4;i++) printf("X");
    printf("%s", s+n-4);
    return 0;
}
