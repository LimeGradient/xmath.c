#ifndef XMATH
#define XMATH

struct Binomial
{
    int a; // First number
    int b; // Second Number
};
typedef struct Binomial Binomial;

int factor_binomial_to_gcf(int a, int b);
int canDivide(int f, int l);
int isInteger(double val);

#endif