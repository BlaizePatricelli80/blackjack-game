#pragma once
#include <string>
#include <cstddef>

#include "hand.h" 

using std::size_t;

// chips are stored as whole dollars in an unsigned 64-bit field

class Player
{
  private:
    std::string         name;
    size_t              chips;
    size_t              currentBet{0};
    Hand                hand;
  
  public:
    Player(std::string name, size_t chips) : name(name), chips(chips) {};

    bool                bet(size_t wager);
    void                takeCard(const Card&);
    void                payout(double factor);
    size_t              getChips() const;
    std::string         getName() const;
    void                printStatus();

};
