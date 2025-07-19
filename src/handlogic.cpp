#include "rules.h"
#include "handlogic.h"

using rules::BlackJack;

void HandLogic::addCard(const Card& card)
{
  cards.push_back(card);
}

constexpr int HandLogic::cardValue(Rank r)
{
  if(r >= Rank::Jack)
    return 10;

  if(r == Rank::Ace)
    return 1; // We will handle edge case elsewhere

  return static_cast<int>(r) + 1;

}

int HandLogic::bestValue() const
{
  int totalVal = 0;
  int aceCount = 0;
  for(auto card : cards)
  {
    if(card.rank == Rank::Ace)
      aceCount++;

    totalVal += cardValue(card.rank); 
  }
  
  while(totalVal <= 11 && aceCount)
  {
    totalVal += 10; // Ace holds a value of 1 so upgrade it to a value of 11
    aceCount--;
  }

  return totalVal;


}
