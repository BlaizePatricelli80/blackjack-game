#pragma once
#include <cstdint>

enum class Rank : uint8_t { Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };
enum class Suit : uint8_t { Clubs, Diamonds, Hearts, Spades };
struct Card
{
  Card() = default;
  Card(Rank rank, Suit suit) : rank(rank), suit(suit) {}; 
  Rank rank;
  Suit suit;
};
