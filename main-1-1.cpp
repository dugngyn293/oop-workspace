#include <iostream>
using namespace std;
#include "AirCraft.h"

int main() {
  AirCraft a1(10);
  a1.set_fuel(90);
  a1.set_numberOfFlights(1);
  cout << "airplain 1 weights: " << a1.get_weight()
       << " and has: " << a1.get_fuel() << " fuel"
       << ", it has " << a1.get_numberOfFlights() << " number of flights"
       << endl;
  cout << "now we will refule a1: " << endl;
  a1.set_weight(20);
  a1.refuel();
  a1.fly(10, 20);
  cout << "now it has: " << a1.get_fuel() << "and weights: " << a1.get_weight()
       << " it flies: " << a1.get_numberOfFlights();
  return 0;
}