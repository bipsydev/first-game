#include "raylib-cpp.hpp"

#include <string>
#include <iostream>



int main(int argc, char * argv[])
{
    //TODO process command-line arguments
    //TODO show launcher window if command-line arguments don't fill all values
    
    try
    {
        const int WIDTH = 1280;
        const int HEIGHT = 720;
        raylib::Window window{WIDTH, HEIGHT, "Raylib C++ - Basic Window!"};

        raylib::Texture logo{"raylib_logo.png"};

        const std::string MESSAGE = "Congrats! You created your first window!";
        const int FONT_SIZE = 20;
        raylib::Text text{raylib::Font{}, MESSAGE, FONT_SIZE, 0, LIGHTGRAY};
        const raylib::Vector2 TEXT_SIZE = text.MeasureEx();
        const raylib::Vector2 TEXT_POS = {static_cast<float>(WIDTH)/2.0f - TEXT_SIZE.GetX()/2.0f,
                                            static_cast<float>(HEIGHT)/2.0f - TEXT_SIZE.GetY()/2.0f};

        // Set our game to run at 60 frames-per-second
        window.SetTargetFPS(60);

        // Main game loop
        while (!window.ShouldClose()) // Detect window close button or ESC key
        {
            // Update
            // TODO: Update your variables here

            // Draw
            window.BeginDrawing();

                window.ClearBackground(RAYWHITE);
                text.Draw(TEXT_POS);


            window.EndDrawing();
        }

        // De-Initialization
        // Unload Resources before closing window
        logo.Unload();
        // Close window and OpenGL context
        window.Close();

    }
    catch(const raylib::RaylibException& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}