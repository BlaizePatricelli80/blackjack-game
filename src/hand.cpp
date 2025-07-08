#include "raylib.h"
#include "hand.h"


void Hand::drawHand()
{
  Texture2D texture = LoadTexture("../textures/CardSpriteSheet.png");
  for(int i = 0; i < cards.size(); i++)
  {
    DrawTextureRec(texture, cards[i].rect, cards[i].pos, NULL); // Render the i-th card using its source rectangle and screen position
  }
}

void Hand::addCard(const Card& card)
{
  cards.push_back(card);
}

int Hand::getValue() const
{
  int value = 0;
  for(int i = 0; i < cards.size(); i++)
  {
    value += cards[i].getValue();
  }

  return value;
}

float Hand::getTargetPosX() const
{
  return targetPos.x;
}

float Hand::getTargetPosY() const
{
  return targetPos.y;
}

void Hand::setTargetPos(Vector2 pos)
{
  targetPos.x = pos.x;
  targetPos.y = pos.y;
}

const std::vector<Card>& Hand::getCards() const
{
  return cards;
}
