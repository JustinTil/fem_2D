#include "triangle_linear.h"
#include <raylib.h>
#include <raymath.h>

void DrawLinearTriangle(Triangle_linear *tri, Vector2 originPosition, int scale)
{

    // Origin position is the position in raylib window (with Y+ down)

    Vector2 p1 = Vector2Add(originPosition, Vector2Scale(FlipY(tri->n1.pos), scale));
    Vector2 p2 = Vector2Add(originPosition, Vector2Scale(FlipY(tri->n2.pos), scale));
    Vector2 p3 = Vector2Add(originPosition, Vector2Scale(FlipY(tri->n3.pos), scale));

    DrawLineEx(p1, p2, 1, BLACK);
    DrawLineEx(p2, p3, 1, BLACK);
    DrawLineEx(p3, p1, 1, BLACK);
}

Vector2 FlipY(Vector2 vec)
{
    vec.y = -vec.y;
    return vec;
}