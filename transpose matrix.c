#include <stdio.h>

int main() {
    int a[2][2], t[2][2], i, j;

    printf("Enter 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}