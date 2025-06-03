#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter first matrix:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &b[i][j]);

    printf("Result of addition:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            result[i][j] = a[i][j] + b[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}