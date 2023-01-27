#ifndef XMATH
#define XMATH

struct Shape
{
    int l;
    int w;
};
typedef struct Shape Shape;

int pi = 3.14;

int factor_binomial_to_gcf(int a, int b);
int canDivide(int f, int l);
int isInteger(double val);

int findArea(Shape s);
int findPerimeter(Shape s);

#endif