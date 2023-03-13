#include "raylib.h"

Camera camera = { 0 };
Vector3 cubePosition = { 0 };

int main() 
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib");
    while (!WindowShouldClose()) 
    {
        BeginDrawing();
            
        EndDrawing();
    }
    CloseWindow(); 
    return 0;
}
