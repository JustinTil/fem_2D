#ifndef _TRIANGLE_LINEAR_H
#define _TRIANGLE_LINEAR_H

#include "node.h"
#include <raylib.h>
#include <raymath.h>

typedef struct Triangle_linear {
    int id;
    Node n1;
    Node n2;
    Node n3;
}Triangle_linear;

void DrawLinearTriangle(Triangle_linear *tri, Vector2 originPosition, int scale);
Vector2 FlipY(Vector2 vec);

#endif