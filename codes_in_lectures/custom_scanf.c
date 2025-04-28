#include <stdio.h>
#include <stdarg.h>

int main() {

    return 0;
}


int _scanf(const char *s, ...) {
    va_list arg;
    va_start(arg, s);
    for(const char *c = s; *c; c++) {
        if(c == "d") {
            int *num = va_arg(arg, int*);
        }
        else if (c == "c") {
            va_arg(arg, char*);
        }
    }

    va_end(arg);
    return 1;
}