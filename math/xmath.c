#include <stdio.h>
#include <stdlib.h>

#include "xmath.h"

double pi = 3.14;

int isInteger(double val) {
    int t = (int)val;
    if (val == t) {
        return 0;
    } else {
        return -1;
    }
}

int canDivide_RESULT;
int canDivide(int f, int l) {
    int r = f / l;
    if (isInteger(r) == 0) {
        canDivide_RESULT = r;
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

int findArea(Quad* s) {
    return s->l * s->w;
}

int findPerimeter(Quad* s) {
    return (2 * s->l) + (2 * s->w);
}

int findCircleDiameter(Circle* c) {
    return c->r * 2;
}

int findCircleArea(Circle* c) {
    return (c->r * c->r) * pi;
}

Quad* new_quad(int l, int w) {
    Quad* q = malloc(sizeof(Quad));
    q->l = l;
    q->w = w;
    return q;
}

Quad* free_quad(Quad* q) {
    free(q);
    return 0;
}

Circle* new_circle(double r) {
    Circle* c = malloc(sizeof(Circle));
    c->r = r;
    return c;
}

Circle* free_circle(Circle* c) {
    free(c);
    return 0;
}

Vector2* new_vector2(int x, int y) {
    Vector2* v = malloc(sizeof(Vector2));
    v->x = x;
    v->y = y;
    return v;
}

Vector2* free_vector2(Vector2* v) {
    free(v);
    return 0;
}