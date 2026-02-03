#include <stdio.h>
int main() {
    char a[100], b[100];
    int f1[256]={0}, f2[256]={0};

    fgets(a,100,stdin);
    fgets(b,100,stdin);

    for(int i=0;a[i];i++) f1[a[i]]++;
    for(int i=0;b[i];i++) f2[b[i]]++;

    for(int i=0;i<256;i++)
        if(f1[i]!=f2[i]) {
            printf("Not Anagram");
            return 0;
        }

    printf("Anagram");
    return 0;
}
