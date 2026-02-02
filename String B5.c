#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n;
    gets(s);
    scanf("%d",&n);

    int len = strlen(s);
    n %= len;

    printf("%s%s", s+n, s);
    return 0;
}
