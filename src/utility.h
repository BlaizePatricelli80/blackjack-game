#pragma once
#include <iostream>
#include <string>

namespace utility
{
  inline void log(std::string_view str)
  {
    std::cout << str << "\n";
  }
};
