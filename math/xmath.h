#ifndef XMATH
#define XMATH

struct Quadrilateral
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

typedef struct Quadrilateral Quad;
typedef struct Circle Circle;
typedef struct Vector2 Vector2;

Quad* new_quad(int l, int w);
Circle* new_circle(double r);
Vector2* new_vector2(int x, int y);

Quad* free_quad(Quad* q);
Circle* free_circle(Circle* c);
Vector2* free_vector2(Vector2* v);

double pi;

int factor_binomial_to_gcf(int a, int b);
int canDivide(int f, int l);
int isInteger(double val);

int findArea(Quad* s);
int findPerimeter(Quad* s);

int findCircleArea(Circle* c);
int findCircleDiameter(Circle* c);

#endif