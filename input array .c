#include <stdio.h>

int main() {
    int nums[5], i;
    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    printf("You entered:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}