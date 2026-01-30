#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(3 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize first 3 elements
    for (int i = 0; i < 3; i++)
        ptr[i] = i + 1;

    // Reallocate memory to hold 5 integers
    ptr = (int *)realloc(ptr, 5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Initialize the newly allocated memory
    for (int i = 3; i < 5; i++)
        ptr[i] = i + 1;

    // Print all 5 elements
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}
