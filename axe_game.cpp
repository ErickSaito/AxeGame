#include "raylib.h"
int main() 
{
  // windown dimensions
  int screenWidth{350};
  int screenHeight{200};
  InitWindow(screenWidth, screenHeight, "Axe Game");

  // circle coordinates
  int circleX{175};
  int circleY{100};

  SetTargetFPS(60);

  while(!WindowShouldClose()) 
  {
    BeginDrawing(); // Start Canvas
    ClearBackground(WHITE);

    // Game logic begins
    DrawCircle(circleX, circleY, 25, BLUE);

    if (IsKeyDown(KEY_D) && circleX < screenWidth)
    {
      circleX += 2;
    }

    if (IsKeyDown(KEY_A) && circleX > 0)
    {
      circleX -= 2;
    }

    EndDrawing(); // End Canvas
  }
  return 0;
}