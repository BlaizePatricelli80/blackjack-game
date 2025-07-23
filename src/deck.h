#pragma once

#include <vector>
#include <optional>
#include <random>
#include "card.h"

class Deck
{
  private:
    std::vector<Card>                       cards;
    static std::mt19937                     rng;  

  public:
    void                                    addCard(const Card& card); 
    [[nodiscard]] std::optional<Card>       takeCard(); // Deck might be empty - can return an optional incase
    void                                    populateDeck();
    void                                    shuffle();
    Card                                    peekTop() const;
    [[nodiscard]] const std::vector<Card>&  getCards() const;
};
