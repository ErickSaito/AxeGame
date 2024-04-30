#include "raylib.h"
int main() 
{
  // windown dimensions
  int screenWidth{800};
  int screenHeight{450};
  InitWindow(screenWidth, screenHeight, "Axe Game");

  // circle coordinates
  int circleX{200};
  int circleY{200};

  // axe coordinates
  int axeX{400};
  int axeY{0};

  SetTargetFPS(60);

  while(!WindowShouldClose()) 
  {
    BeginDrawing(); // Start Canvas
    ClearBackground(WHITE);

    // Game logic begins
    DrawCircle(circleX, circleY, 25, BLUE);
    DrawRectangle(axeX, axeY, 50, 50, RED);

    // move the axe
    axeY += 2;

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