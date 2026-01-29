#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "Admin") == 0 &&
        strcmp(password, "admin1234") == 0 &&
        strlen(password) > 8) {

        printf("Login successful");
    } else {
        printf("Invalid username or password");
    }

    return 0;
}
