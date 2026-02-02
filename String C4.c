#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int freq[256]={0};
    gets(s);

    for(int i=0;s[i];i++) freq[s[i]]++;

    for(int i=0;s[i];i++) {
        for(int c=0;c<256;c++)
            if(freq[c] && (i==0 || s[i-1]!=c)) {
                s[i]=c;
                freq[c]--;
                break;
            }
    }
    puts(s);
    return 0;
}
