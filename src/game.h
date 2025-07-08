#pragma once
#include "deck.h"
#include "hand.h"

enum class GameState
{
  MainMenu,
  Playing,
  GameOver
};

class Game
{
  private:
    Deck deck;
    GameState state;
    Hand playerHand;
    Hand deckHand;


  public:
    Game();
    void run();
    void update();
    void draw();

};
