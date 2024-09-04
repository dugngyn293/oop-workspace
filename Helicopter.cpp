#include <iostream>
#include <string>
using namespace std;
#include "Helicopter.h"

Helicopter::Helicopter() {};
Helicopter::Helicopter(int w, string n) {
  numberOfFlights = 0;
  fuel = 100;
  weight = w;
  name = n;
};

void Helicopter::fly(int headwind, int minutes) {
  int ogFuel = fuel;
  if (headwind >= 40) {
    if (weight > 5670) {
      fuel = fuel - (0.4 * minutes) - (0.01 * (weight - 5670) * minutes);
    } else if (weight <= 5670) {
      fuel = fuel - (0.4 * minutes);
    }
  } else if (headwind < 40) {
    if (weight > 5670) {
      fuel = fuel - (0.2 * minutes) - (0.01 * (weight - 5670) * minutes);
    } else if (weight <= 5670) {
      fuel = fuel - (0.2 * minutes);
    }
  }
  if (fuel < 20) {
    fuel = ogFuel;
  } else if (fuel >= 20) {
    numberOfFlights++;
  }
};
void Helicopter::set_name(string name) { this->name = name; };
string Helicopter::get_name() { return name; };