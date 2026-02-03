#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int count=0, flag=0;

    fgets(str,200,stdin);
    for(int i=0;str[i];i++) {
        if(isalpha(str[i])) {
            if(!flag) count++;
            flag=1;
        } else flag=0;
    }

    printf("%d", count);
    return 0;
}
