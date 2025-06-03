#include <stdio.h>

int main() {
    int number, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number <= 1) flag = 0;

    for(int i = 2; i * i <= number; i++) {
        if(number % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("%d is PRIME\n", number);
    else
        printf("%d is NOT prime\n", number);

    return 0;
}