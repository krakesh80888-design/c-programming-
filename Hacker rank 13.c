#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str,100,stdin);
    int n=strlen(str);

    for(int i=0;i<n;i++)
        for(int j=1;j<=n-i;j++)
            printf("%.*s\n", j, str+i);

    return 0;
}
