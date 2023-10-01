
#include "raylib.h"

#include <string>

int main(void)
{
    const int WIDTH = 1280;
    const int HEIGHT = 720;

    InitWindow(WIDTH, HEIGHT, "raylib [core] example - basic window");

    // Set our game to run at 60 frames-per-second
    SetTargetFPS(60);

    const int FONT_SIZE = 20;
    const std::string text = "Congrats! You created your first window!";
    const int length = MeasureText(text.c_str(), FONT_SIZE);

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        // TODO: Update your variables here

        // Draw
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText(text.c_str(),
                     WIDTH/2 - length/2,
                     HEIGHT/2 - FONT_SIZE/2,
                     FONT_SIZE, LIGHTGRAY);

        EndDrawing();
    }

    // De-Initialization
    // Close window and OpenGL context
    CloseWindow();

    return 0;
}