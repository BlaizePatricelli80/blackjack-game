#include "raylib.h"
#include "game.h"

void Game::run()
{
  InitWindow(3000, 1200, "BlackJack");
  SetWindowState(FLAG_VSYNC_HINT); // Makes FPS stay at refresh rate

  while(!WindowShouldClose())
  {
      
  }


}

void Game::update()
{
  switch(state)
  {
    case GameState::MainMenu:
       if (IsKeyPressed(KEY_ENTER)) {
        state = GameState::Playing;
      }
      break;

    case GameState::Playing:


      break;

    case GameState::GameOver:
      
      if(IsKeyPressed(KEY_R)){
        state = GameState::Playing;
      }
      else if(IsKeyPressed(KEY_ENTER){
        state = GameState::MainMenu;
      }
      break;
  }
}

void Game::draw()
{
  
  switch(state)
  {
    case GameState::MainMenu:
        
      void DrawText("Press the ENTER key to start", GetScreenWidth()/2 - 100, GetScreenHeight()/2, 15, ); 
      break;
    
    case GameState::Playing:
      
      break;

    case GameState::GameOver:
      
      break;

  }
}
