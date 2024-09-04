#ifndef AIRFLEET_H
#define AIRFLEET_H
#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"

class AirFleet {
 private:
  AirCraft** fleet;

 public:
  AirFleet();
  AirCraft** get_fleet();
  virtual ~AirFleet();
};

#endif