#include "raylib.h"
int main() 
{
  int screenWidth = 350;
  // Code here
  InitWindow(screenWidth, 200, "Axe Game");

  while(!WindowShouldClose()) {
    BeginDrawing(); // Start Canvas
    ClearBackground(RED);
    EndDrawing(); // End Canvas
  }
  return 0;
}