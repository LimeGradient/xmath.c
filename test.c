#include <stdio.h>

#include "math/xmath.h"

int main() {
    Shape shape;
    shape.l = 10;
    shape.w = 10;

    Circle circle;
    circle.r = 5;

    Vector2* vector2 = new_vector2(10, 9);

    printf("%d\n", factor_binomial_to_gcf(5, 10));
    printf("%d\n", findCircleArea(circle));

    return 0;
}