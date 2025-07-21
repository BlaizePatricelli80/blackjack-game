#pragma once
#include "card.h"



namespace rules
{
  inline constexpr int BlackJack = 21;
  
  constexpr int cardValue(Rank r)
  {
    if(r >= Rank::Jack)
      return 10;

    if(r == Rank::Ace)
      return 1; // We will handle edge case elsewhere

    return static_cast<int>(r) + 1;
  }

};

