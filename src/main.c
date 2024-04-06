#include <raylib.h>
#include <raymath.h>
#include <stdlib.h>

#include "mesh.h"
#include "triangle_linear.h"

int main(void)
{
    const int screenWidth = 1200;
    const int screenHeight = 675;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);

    Triangle_linear element1 = {0, (Node){0, (Vector2){0, 0}}, (Node){0, (Vector2){1, 0}}, (Node){0, (Vector2){0, 1}}};
    Triangle_linear element2 = {0, (Node){0, (Vector2){1, 0}}, (Node){0, (Vector2){1, 1}}, (Node){0, (Vector2){0, 1}}};
    Mesh_triangle_linear mesh;
    mesh.n = 2;
    mesh.elementList = (Triangle_linear*)malloc(sizeof(Triangle_linear) * mesh.n);
    *(mesh.elementList) = element1;
    *(mesh.elementList + 1) = element2;

    int displayScale = 200;

    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        BeginDrawing();

            ClearBackground(RAYWHITE);

            // Draw Origin
            Vector2 originPosition = {50, screenHeight - 50}; // Defined with Y+ down
            DrawLineEx(originPosition, Vector2Add(originPosition, (Vector2){30, 0}), 2, RED); // X
            DrawLineEx(originPosition, Vector2Add(originPosition, (Vector2){0, -30}), 2, GREEN); // Y

            // Draw mesh
            DrawMeshTriangleLinear(&mesh, originPosition, displayScale);
            
        EndDrawing();
    }

    CloseWindow();

    return 0;
}