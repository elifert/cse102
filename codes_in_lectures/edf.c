#include <stdio.h>
#include <math.h>

#define PI sin(PI)

int main() {
    int i,j,n;
    int sum = 0;
    n = 3;
    for (j=0;j<n;j++) {
        for (i=0;i<n;i++) printf("*");  
        printf("\n");
    }

    for (i=0; i <= n; ++i) {
        sum += i;
        printf("%d", i);
    }
    i = 0;
    while (i == 0) {
        printf("%d", i = 0);
    }
    printf("%d", sum);
    return 0;
}