#include <stdio.h>

#include "xmath.h"

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

int factor_binomial_to_gcf(int a, int b) {
    if (canDivide(b, a) == 0) {
        int i = a * canDivide_RESULT;
        if (i == b) {
            return a; 
        }
    } else {
        return -1;
    }
}