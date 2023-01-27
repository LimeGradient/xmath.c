#include <stdio.h>

#include "math/xmath.h"

int main() {
    Binomial binomial;
    binomial.a = 3;
    binomial.b = 6;
    binomial.s[2] = "+";

    printf("%d\n", canDivide(6, 3));

    return 0;
}