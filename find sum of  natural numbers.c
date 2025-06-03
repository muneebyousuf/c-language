#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user for input
    printf("Enter a positive number: ");
    scanf("%d", &n);

    // Calculate the sum
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of natural numbers from 1 to %d is %d\n", n, sum);

    return 0;
}