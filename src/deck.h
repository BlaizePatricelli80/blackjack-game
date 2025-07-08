#pragma once 
#include "node.h"


class Deck
{
  private:
    Node* head;
    Node* tail;


  public:
    Deck();
    void addCard(const Card& card);
    Card drawCard(); // Takes a card from the top of the deck
    void drawDeck(); // Render the deck(but only have to draw the top card)
    Node* getNodeAt(int i);
    void shuffleDeck();

}
