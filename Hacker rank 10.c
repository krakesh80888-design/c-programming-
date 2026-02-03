#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50];
    char small[50], large[50];
    int i=0, j=0;

    fgets(str,200,stdin);
    while (str[i]) {
        if (str[i]!=' ') word[j++]=str[i];
        else {
            word[j]='\0';
            if (strlen(word)>strlen(large)) strcpy(large,word);
            if (strlen(small)==0 || strlen(word)<strlen(small)) strcpy(small,word);
            j=0;
        }
        i++;
    }

    printf("Smallest: %s\nLargest: %s", small, large);
    return 0;
}
