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
