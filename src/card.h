#pragma once

#include "raylib.h"

struct Card
{
  private:
    Vector2 pos;
    Rectangle rect;
    int value;

  public:
    void setPos(Vector2 position);
    float getX() const; // const promises not to modify the value
    float getY() const;
    int getValue() const;
    Rectangle getRect() const;
    Card() : pos({0,0}), rect({0,0,0,0}), value(-1) {}
    Card(Vector2 pos, Rectangle rect , int value) : pos(pos), rect(rect), value(value) {}

};
