#include <stdio.h>

int main() {
    int n = 4;
    int x, y;
    int a = 11;
    printf("%3d\n", --n);
    printf("%3d\n", n);
    printf("%3d\n", n--);
    printf("%3d\n", n);
    y = (n * 4) + (++n);
    x = n++ * --n;
    printf("y: %d\nx: %d\n", y, x);
}