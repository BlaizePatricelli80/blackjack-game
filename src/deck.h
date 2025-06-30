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
    Card drawCard();
    Node* getNodeAt(int i);
    void shuffleDeck();

}
