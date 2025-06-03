#include <stdio.h>

int main() {
    char name[100];

    printf("Enter a string: ");
    gets(name);  // Note: unsafe, but okay for beginners

    printf("You entered: %s\n", name);

    return 0;
}