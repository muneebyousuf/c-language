#include <stdio.h>

int main() {
    int data[5], i;
    printf("Enter 5 values: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &data[i]);
    }

    printf("In reverse order:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d ", data[i]);
    }

    return 0;
}