#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    gets(s);

    char *p = strchr(s,'@');
    if(p) printf("%s", p+1);
    return 0;
}
