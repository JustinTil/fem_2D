#include "mesh.h"
#include "triangle_linear.h"


void DrawMeshTriangleLinear(Mesh_triangle_linear *mesh, Vector2 originPosition, int scale)
{
    for (int i = 0; i < mesh->n; i++) {
        DrawLinearTriangle((mesh->elementList + i), originPosition, scale);
    }
}