#include "raylib.h"
#include "card.h"



void Card::setPos(Vector2 position)
{
  pos = position;
}

float Card::getX() const
{
  return pos.x;
}

float Card::getY() const
{
  return pos.y;
}

int Card::getValue() const
{
  return value;
}

Rectangle Card::getRect() const
{
  return rect;
}
