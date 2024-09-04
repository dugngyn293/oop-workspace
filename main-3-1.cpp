#include <iostream>

#include "AirCraft.h"
#include "AirFleet.h"
#include "Airplane.h"
#include "Helicopter.h"

int main() {
  AirFleet adelaide;
  AirCraft** check;
  check = adelaide.get_fleet();
  for (int i = 0; i < 5; i++) {
    std::cout << check[i]->get_weight() << std::endl;
  }

  return 0;
}