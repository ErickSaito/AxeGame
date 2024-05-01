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
  int circleRadius{25};

  // circle edges
  int lCircleX{circleX - circleRadius};
  int rCircleX{circleX + circleRadius};
  int tCircleY{circleY - circleRadius};
  int bCircleY{circleY + circleRadius};

  // axe coordinates
  int axeX{400};
  int axeY{0};
  int axeWidth{50};

  // axe edges
  int lAxeX{axeX};
  int rAxeX{axeX + axeWidth};
  int tAxeY{axeY};
  int bAxeY{axeY + axeWidth};

  int direction{10};

  bool collisionWithAxe =
      (bAxeY >= tCircleY) &&
      (tAxeY <= bCircleY) &&
      (rAxeX >= lCircleX) &&
      (lAxeX <= rCircleX);

  SetTargetFPS(60);

  while (!WindowShouldClose())
  {
    BeginDrawing(); // Start Canvas
    ClearBackground(WHITE);

    if (collisionWithAxe)
    {
      DrawText("Game Over", 400, 200, 20, RED);
    }
    else
    {
      // Game logic begins

      // update the edges
      lCircleX = circleX - circleRadius;
      rCircleX = circleX + circleRadius;
      tCircleY = circleY - circleRadius;
      bCircleY = circleY + circleRadius;
      lAxeX = axeX;
      rAxeX = axeX + axeWidth;
      tAxeY = axeY;
      bAxeY = axeY + axeWidth;

      // check for collision
      collisionWithAxe =
          (bAxeY >= tCircleY) &&
          (tAxeY <= bCircleY) &&
          (rAxeX >= lCircleX) &&
          (lAxeX <= rCircleX);

      DrawCircle(circleX, circleY, circleRadius, BLUE);
      DrawRectangle(axeX, axeY, axeWidth, axeWidth, RED);

      // move the axe
      axeY += direction;
      if (axeY > screenHeight || axeY < 0)
      {
        direction = -direction;
      }

      if (IsKeyDown(KEY_D) && circleX < screenWidth)
      {
        circleX += 2;
      }

      if (IsKeyDown(KEY_A) && circleX > 0)
      {
        circleX -= 2;
      }
    }

    EndDrawing(); // End Canvas
  }
  return 0;
}