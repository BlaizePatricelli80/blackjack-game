#include <iostream>
#include "player.h"
#include "card.h"
#include "deck.h"


int main()
{ 
  Player p("Alice", 100);
  p.bet(5);   p.payout(1.5);   std::cout << p.getChips() << '\n';  
  p.bet(7);   p.payout(1.5);   std::cout << p.getChips() << '\n'; 
  p.bet(5);   p.payout(0.0);   std::cout << p.getChips() << '\n';
  bool ok = p.bet(200);        std::cout << ok << '\n';         


  return 0;
}
