#ifndef _MESH_H
#define _MESH_H

#include "triangle_linear.h"
#include <raylib.h>
typedef struct Mesh_triangle_linear {
    int n; // number of elements
    Triangle_linear *elementList;
}Mesh_triangle_linear;

void DrawMeshTriangleLinear(Mesh_triangle_linear mesh);

#endif