#include <stdio.h>
int main() {
    char a[100], b[100];
    int i=0;

    fgets(a,100,stdin);
    fgets(b,100,stdin);

    while (a[i]==b[i] && a[i] && b[i]) i++;

    if (a[i] > b[i]) printf("First string is greater");
    else if (a[i] < b[i]) printf("Second string is greater");
    else printf("Strings are equal");

    return 0;
}
