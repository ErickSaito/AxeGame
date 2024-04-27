#include "raylib.h"
int main() 
{
  int screenWidth = 350;
  // Code here
  InitWindow(screenWidth, 200, "Axe Game");

  while(!WindowShouldClose()) {
    BeginDrawing(); // Start Canvas
    ClearBackground(WHITE);
    DrawCircle(175, 100, 25, BLUE);
    EndDrawing(); // End Canvas
  }
  return 0;
}