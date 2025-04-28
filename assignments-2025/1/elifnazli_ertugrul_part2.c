#include <stdio.h>

int main() {
    float R, pi = 3.14, area, r;
    printf("Enter the diameter of sphere (R): ");
    scanf("%f", &R);
    r = R / 2; /* diameter is the twice of radius */
    area = 4 * pi * r * r;
    printf("Area of the sphere: %.2f\n", area);
    return 0;
}