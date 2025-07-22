#include <cmath>

#include "player.h"
#include "utility.h"

using utility::log;

bool Player::bet(size_t wager) // RoundEngine will hand out the bet, player will just confirm they can bet
{
  if(wager > 0 && static_cast<int>(chips - wager) >= 0)
  {
    currentBet = wager;
    chips -= currentBet;
    return true;
  }

  return false;
}

void Player::takeCard(const Card& card)
{
  hand.addCard(card);
}

void Player::payout(double factor)
{
  double raw = static_cast<double>(currentBet) * factor;
  size_t rounded = static_cast<size_t>(std::round(raw));

  chips += static_cast<size_t>(rounded);
  currentBet = 0;
}

std::string Player::getName() const
{
  return name;
}

size_t Player::getChips() const
{
  return chips;
}


void Player::printStatus()
{
  std::cout << "\n";
  std::cout << name << "\n";
  std::cout << chips << "\n";
}


