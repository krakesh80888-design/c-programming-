#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int v=0, c=0, d=0, s=0;
    fgets(str, 200, stdin);

    for (int i=0; str[i]; i++) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
        else if (isdigit(str[i])) d++;
        else if (str[i]==' ') s++;
    }

    printf("Vowels=%d Consonants=%d Digits=%d Spaces=%d", v,c,d,s);
    return 0;
}
