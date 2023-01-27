#ifndef XMATH
#define XMATH

struct Binomial
{
    int a; // First number
    int b; // Second Number
    char *s[1]; // Symbol (ex. + or -)
};
typedef struct Binomial Binomial;

int factor_binomial(Binomial *b);
int canDivide(int f, int l);
int isInteger(double val);

#endif