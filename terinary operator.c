#include <stdio.h>

int main() {
    int a, b;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    int big = (a > b) ? a : b;
    printf("Bigger number is %d\n", big);

    return 0;
}