#include <stdio.h>

#include "xmath.h"

double pi = 3.14;

int isInteger(double val) {
    int t = (int)val; // Turns double into int
    if (val == t) {
        return 0; // Basically a bool but in C
    } else {
        return -1;
    }
}

int canDivide_RESULT;
int canDivide(int f, int l) {
    int r = f / l;
    if (isInteger(r) == 0) {
        canDivide_RESULT = r; // YIPPEE CAN DIVIDE
        return 0;
    } else {
        return -1;
    }
}

int factor_binomial_to_gcf(int a, int b) { // it actually does
    if (canDivide(b, a) == 0) {
        int i = a * canDivide_RESULT;
        if (i == b) {
            return a; 
        }
    } else {
        return -1;
    }
}

int findArea(Shape s) {
    return s.l * s.w;
}

int findPerimeter(Shape s) {
    return (2 * s.l) + (2 * s.w);
}

int findCircleDiameter(Circle c) {
    return c.r * 2;
}

int findCircleArea(Circle c) {
    return (c.r * c.r) * pi;
}