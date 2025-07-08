#pragma once

#include "raylib.h"
#include <vector>
#include "card.h"


class Hand
{
  private:
    std::vector<Card> cards;
    Vector2 targetPosition;

  public: 

    void drawHand();
    void addCard(const Card& card);
    int getValue() const;
    float getTargetPosX() const;
    float getTargetPosY() const;
    void setTargetPos(Vector2 pos);
    const std::vector<Card>& getCards() const;
  
};
