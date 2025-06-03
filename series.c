#include <stdio.h>

int main() {
    int n, counter = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    while(counter <= n) {
        printf("%d ", counter);
        counter++;
    }

    return 0;
}