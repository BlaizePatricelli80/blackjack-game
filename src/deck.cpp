#include <algorithm>
#include <random>
#include <cassert>
#include "utility.h"
#include "deck.h"


using utility::log;

std::mt19937 Deck::rng{ std::random_device{}() };

void Deck::addCard(const Card& card)
{
  cards.push_back(card);
}

std::optional<Card> Deck::takeCard()
{
  
  if(cards.empty())
  {
    log("trying to pop cards from empty vector");
    return std::nullopt;
  }
  Card card = peekTop();
  cards.pop_back();

  return card;
}

void Deck::populateDeck()
{

  for(size_t suitIndex = 0; suitIndex < 4; suitIndex++)
  {
    Suit s = static_cast<Suit>(suitIndex);

    for(size_t rankIndex = 0; rankIndex < 13; rankIndex++)
    {
      Rank r = static_cast<Rank>(rankIndex);

      Card card(r, s);
      addCard(card);
    }
  }
}

void Deck::shuffle()
{
 
  std::shuffle(cards.begin(), cards.end(), rng);
}

Card Deck::peekTop() const
{
    assert(!cards.empty() && "Peek called on empty deck");
    return cards.back();  // Returns but doesn't remove
}

const std::vector<Card>& Deck::getCards() const // Reference is valid until deck is modified
{
  return cards;
}
