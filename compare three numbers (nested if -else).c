 #include <stdio.h>
 int main() {
    int a = 12, b = 5, c = 8;
    if (a > b) {
        if (a > c)
            printf("a is largest\n");
        else
            printf("c is largest\n");
    } else {
        if (b > c)
            printf("b is largest\n");
        else
            printf("c is largest\n");
    }
    return 0;
 }
