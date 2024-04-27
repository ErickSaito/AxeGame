#include "raylib.h"
int main() 
{
  int screenWidth = 350;
  // Code here
  InitWindow(screenWidth, 200, "Axe Game");

  while(true) {
    BeginDrawing(); // Start Canvas
    ClearBackground(RED);
    EndDrawing(); // End Canvas
  }
  return 0;
}