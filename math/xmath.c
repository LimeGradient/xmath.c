#include <stdio.h>

#include "xmath.h"

int isInteger(double val) {
    int t = (int)val;
    if (val == t) {
        return 0;
    } else {
        return -1;
    }
}

int canDivide(int f, int l) {
    int r = f / l;
    if (isInteger(r) == 0) {
        return 0;
    } else {
        return -1;
    }
}

int factor_binomial(Binomial *b) {
    
}