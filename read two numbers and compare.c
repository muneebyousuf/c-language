#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if(x > y)
        printf("%d is greater\n", x);
    else if(y > x)
        printf("%d is greater\n", y);
    else
        printf("Both numbers are equal\n");

    return 0;
}