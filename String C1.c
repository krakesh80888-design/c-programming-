#include <stdio.h>
#include <string.h>

int isPal(char s[], int l, int r) {
    while(l<r)
        if(s[l++]!=s[r--]) return 0;
    return 1;
}

int main() {
    char s[100];
    gets(s);
    int n=strlen(s), max=1, start=0;

    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            if(isPal(s,i,j) && j-i+1>max) {
                start=i;
                max=j-i+1;
            }

    printf("%.*s", max, s+start);
    return 0;
}
