#include <raylib.h>
#include <raymath.h>

#include "triangle_linear.h"

int main(void)
{
    const int screenWidth = 1200;
    const int screenHeight = 675;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);

    Triangle_linear element1 = {(Vector2){0, 0}, (Vector2){1, 0}, (Vector2){0, 1}};
    Triangle_linear element2 = {(Vector2){1, 0}, (Vector2){1, 1}, (Vector2){0, 1}};

    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        BeginDrawing();

            ClearBackground(RAYWHITE);

            // Window for CLI
            int cliHeight = 0.2 * screenHeight;
            DrawLine(0, screenHeight - cliHeight, screenWidth, screenHeight - cliHeight, BLACK);

            // Draw Origin
            Vector2 originPosition = {50, screenHeight - cliHeight - 50}; // Defined with Y+ down
            DrawLineEx(originPosition, Vector2Add(originPosition, (Vector2){30, 0}), 2, RED); // X
            DrawLineEx(originPosition, Vector2Add(originPosition, (Vector2){0, -30}), 2, GREEN); // Y

            // Draw a single element (test)
            DrawLinearTriangle(&element1, originPosition, 100);
            DrawLinearTriangle(&element2, originPosition, 100);
            
        EndDrawing();
    }

    CloseWindow();

    return 0;
}