#include <stdio.h>
int main() {
    char str[100], old, newc;
    fgets(str,100,stdin);
    scanf(" %c %c", &old, &newc);

    for(int i=0; str[i]; i++)
        if(str[i]==old) str[i]=newc;

    printf("%s", str);
    return 0;
}
