#ifndef AIRFLEET_H
#define AIRFLEET_H
#include <iostream>
#include <string>
using namespace std;
#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"

class AirFleet {
 private:
  AirCraft **fleet;

 public:
  AirFleet();

  AirCraft **get_fleet();
  ~AirFleet();
};

#endif