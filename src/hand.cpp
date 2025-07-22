#include "rules.h"
#include "hand.h"

using rules::BlackJack;
using rules::cardValue;

void Hand::addCard(const Card& card)
{
  cards.push_back(card);
}

int Hand::bestValue() const
{
  int totalVal = 0;
  int aceCount = 0;
  for(const Card& card : cards)
  {
    if(card.rank == Rank::Ace)
      aceCount++;

    totalVal += rules::cardValue(card.rank); 
  }
  
  while(totalVal <= 11 && aceCount)
  {
    totalVal += 10; // Ace holds a value of 1 so upgrade it to a value of 11
    aceCount--;
  }

  return totalVal;


}

std::size_t Hand::size() const
{
  return cards.size();
}

bool Hand::isNatural21() const // A true blackjack comes from 2 cards adding up to 21
{
  return size() == 2 && bestValue() == BlackJack;
}

bool Hand::isPair() const // These table rules will let the player split on any two cards with the same value
{
  if(size() == 2 && rules::cardValue(cards[0].rank) == rules::cardValue(cards[1].rank))
  {
     return true;
  }

  return false;
}

void Hand::clear()
{
  cards.clear();
}
