#include "raylib.h"
#include "deck.h"
#include <cstdlib> // For srand and rand
#include <ctime>   // For time




Deck::Deck()
{
  Texture2D cardSpriteSheet = LoadTexture("textures/CardSpriteSheet.png");

  const int CARD_WIDTH = 144;
  const int CARD_HEIGHT = 221;

  int heightMin = 0;
  int widthMin = 0;

  
  for(int i = 1; i < 53; i++)
  {

    int rank = (i - 1) % 13 + 1; // 1-13
    int value = (rank > 10) ? 10 : rank;
    if(rank == 1) value = 11; // ace

    Rectangle source = {
      (float) widthMin,
      (float) heightMin,
      (float) CARD_WIDTH,
      (float) CARD_HEIGHT
    }

    Vector2 position = { 100.0f, 100.0f };
    Card card(position, source, value);
    addCard(card);
    

    if( i % 13 == 0) // If at the end of the card row v 
    {
      heightMin += CARD_HEIGHT;
      widthMin = 0;
    }
    else
    {
      widthMin += CARD_WIDTH;
    }

  }

void Deck::addCard(const Card& card)
{
  Node* node = new Node(card, NULL, NULL);
  if(head == NULL)
  {
    head = node
    tail = node;
    
  }
  else
  {
    tail->next = node;
    node->prev = tail;
    tail = node;
  }

}

Node* getNodeAt(int i)
{
  Node* cur = head;
  for(int j = 0; j < i; j++)
  {
    cur = cur->next;
  }

  return cur;
}

Card Deck::drawCard()
{
  if(!tail)
  {
    return Card();
  }

  Node* current = tail;
  if(tail->prev != NULL)
  {
    tail = tail->prev;
    tail->next = NULL;
  }
  else
  {
    // List is empty now
    tail = NULL;
    head = NULL; 
  }


  Card card = current->card;
  delete(current);
  current = nullptr;

  return card;
}

void Deck::shuffleDeck()
{
  srand(time(NULL));
  for(int i = 51; i > 0; i--)
  {
    int j = rand() % ( i + 1 );
    Node* nodeI = getNodeAt(i);
    Node* nodeJ = getNodeAt(j);

    std::swap(nodeI->card, nodeJ->card);
  }
}
