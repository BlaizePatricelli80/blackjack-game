#pragma once

#include "card.h"

  
struct Node
{
  Card card;
  Node* next;
  Node* prev;
  Node(Card card, Node* next, Node* prev) : card(card), next(next), prev(prev);
};
