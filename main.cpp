#include <memory>

#include "gossip.h"

int main()
{
  using Gossip = ribi::Gossip;
  {
    Gossip a;               //Default constructor
    Gossip b(std::move(a)); //Move constructor
  }
  {
    const Gossip a;         //Default constructor
    Gossip b(std::move(a)); //Copy constructor
  }
}
