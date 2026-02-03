#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);

    for (int i=0; str[i]; i++) {
        if (islower(str[i])) str[i]=toupper(str[i]);
        else if (isupper(str[i])) str[i]=tolower(str[i]);
    }

    printf("%s", str);
    return 0;
}
