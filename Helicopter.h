#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <iostream>
#include <string>
using namespace std;
#include "AirCraft.h"

class Helicopter : public AirCraft {
 private:
  string name;  // name of the Helicopter
 public:
  Helicopter();
  Helicopter(int w, string n);  // creates a Helicopter with weight w and name n
  void set_name(string name);
  string get_name();

  void fly(int headwind, int minutes);
};
#endif