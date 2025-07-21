#pragma once
#include <vector>
#include <cstddef>
#include "card.h"


class Hand
{
  private:
    std::vector<Card> cards;

  public:
    void addCard(const Card& card);
    int bestValue() const;
    void clear();
    std::size_t size() const;
    bool isNatural21() const;
    bool isPair() const;
};

