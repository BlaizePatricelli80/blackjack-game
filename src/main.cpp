#include <iostream>
#include "card.h"
#include "deck.h"


int main()
{ 
  Deck deck;
  deck.populateDeck();
  deck.shuffle();

  while(true)
  {
    if(auto maybeCard = deck.takeCard(); maybeCard.has_value())
    {
      Card card = maybeCard.value();
      
      std::cout << "\n\n";
      std::cout << "Card Suit - " << static_cast<int>(card.suit) << "\n";
      std::cout << "Card Rank - " << static_cast<int>(card.rank) << "\n";

    }
    else
    {
      break;
    }

  }
  return 0;
}
