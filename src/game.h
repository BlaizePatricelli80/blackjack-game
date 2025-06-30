#pragma once
#include "deck.h"

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
    


  public:
    Game();
    void run();
    void update();
    void draw();

};
