#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial = %lld\n", factorial);
    return 0;
}