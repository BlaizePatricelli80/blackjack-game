#pragma once
#include <vector>
#include "card.h"


class HandLogic
{
  private:
    std::vector<Card> cards;

  public:
    void addCard(const Card& card);
    static constexpr int cardValue(Rank r);
    int bestValue() const;
};

