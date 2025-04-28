#include <stdio.h>

int main() {
    long double x = 1.000000000000001;
    long double y = 1.000000000000002;
    printf("x: %.20Lf\ny: %Lf\nx + y: %Lf\n", x, y, x + y);
}