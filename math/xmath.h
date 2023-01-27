#ifndef XMATH
#define XMATH

struct Shape
{
    int l;
    int w;
};
struct Circle
{
    double r;
};
struct Vector2 
{
    int x;
    int y;
};
Vector2* new_vector2(int x, int y);

typedef struct Shape Shape;
typedef struct Circle Circle;
typedef struct Vector2 Vector2;

double pi;

int factor_binomial_to_gcf(int a, int b);
int canDivide(int f, int l);
int isInteger(double val);

int findArea(Shape s);
int findPerimeter(Shape s);

int findCircleArea(Circle c);
int findCircleDiameter(Circle c);

#endif