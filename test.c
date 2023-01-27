#include <stdio.h>

#include "math/xmath.h"

int main() {

    Quad* quad = new_quad(10, 4);
    Circle* circle = new_circle(5.2);
    Vector2* vector2 = new_vector2(10, 9);

    printf("%d\n", factor_binomial_to_gcf(5, 10));
    printf("%d\n", findCircleArea(circle));

    return 0;
}