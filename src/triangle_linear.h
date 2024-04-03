#ifndef _TRIANGLE_LINEAR_H
#define _TRIANGLE_LINEAR_H

#include <raylib.h>
#include <raymath.h>

typedef struct Triangle_linear {
    Vector2 n1;
    Vector2 n2;
    Vector2 n3;
}Triangle_linear;

void DrawLinearTriangle(Triangle_linear *tri, Vector2 originPosition, int scale);
Vector2 FlipY(Vector2 vec);

#endif