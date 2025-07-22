#include <iostream>
#include <cmath>
#include "player.h"
#include "card.h"
#include "deck.h"


int main()
{ 
  Player p("Alice", 100);
  p.bet(5);   p.payout(1.5);   std::cout << p.getChips() << '\n';  // expect 103
  p.bet(7);   p.payout(1.5);   std::cout << p.getChips() << '\n';  // expect 110 or 111 (check rounding)
  p.bet(5);   p.payout(0.0);   std::cout << p.getChips() << '\n';  // bankroll unchanged
  bool ok = p.bet(200);        std::cout << ok << '\n';            // expect false 


  double num = 7 * 1.5;
  std::cout << std::round(num);
  return 0;
}
