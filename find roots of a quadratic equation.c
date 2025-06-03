 #include <stdio.h>
 #include <math.h>
 int main() {
    float a = 1, b = -3, c = 2;
    float d = b*b - 4*a*c;
    if (d > 0) {
        float r1 = (-b + sqrt(d)) / (2*a);
        float r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots: %.2f and %.2f\n", r1, r2);
    } else if (d == 0) {
        float r = -b / (2*a);
        printf("One root: %.2f\n", r);
    } else {
        printf("Complex roots\n");
    }
    return 0;
 }
