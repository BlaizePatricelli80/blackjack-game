#pragma once

#include <vector>
#include "card.h"


class Hand
{
  private:
    std::vector<Card> cards;


  public: 

    void drawHand();
    void addCard(const Card& card);
    int getValue() const;
    const std::vector<Card>& getCards() const;
  
}
