#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i, j=0;

    fgets(str, 100, stdin);

    for (i=0; str[i]!='\0' && str[i]!='\n'; i++);
    i--;

    for (; i>=0; i--)
        rev[j++] = str[i];

    rev[j] = '\0';
    printf("%s", rev);
    return 0;
}
