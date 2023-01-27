#include <stdio.h>

#include "math/xmath.h"

int main() {
    Shape shape;
    shape.l = 10;
    shape.w = 10;

    printf("%d\n", factor_binomial_to_gcf(3, 6));
    printf("%d\n", findArea(shape));
    printf("%d\n", findPerimeter(shape));

    return 0;
}