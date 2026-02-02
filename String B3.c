#include <stdio.h>
#include <string.h>

int main() {
    char s[100], w[20], small[20], large[20];
    int i=0,j=0;

    gets(s);
    while(1) {
        if(s[i]==' ' || s[i]=='\0') {
            w[j]='\0';
            if(strlen(w)>0) {
                if(!small[0] || strlen(w)<strlen(small)) strcpy(small,w);
                if(strlen(w)>strlen(large)) strcpy(large,w);
            }
            j=0;
            if(s[i]=='\0') break;
        } else w[j++]=s[i];
        i++;
    }
    printf("Smallest: %s\nLargest: %s", small, large);
    return 0;
}
