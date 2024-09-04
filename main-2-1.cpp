#include <iostream>
using namespace std;
#include "Helicopter.h"

int main() {
  Helicopter a1(5000, "Jonny");
  a1.set_fuel(80);
  a1.set_numberOfFlights(0);
  cout << "helicopter " << a1.get_name() << "weights: " << a1.get_weight()
       << " and has: " << a1.get_fuel() << " fuel"
       << ", it has " << a1.get_numberOfFlights() << " number of flights"
       << endl;
  cout << "now lets call Jonny, Kevin" << endl;
  a1.set_name("Kevin");
  cout << "lets take Kevin for a flight" << endl;
  a1.set_weight(5690);
  a1.fly(45, 10);
  cout << "now" << a1.get_name() << "has: " << a1.get_fuel()
       << "and weights: " << a1.get_weight()
       << " it flies: " << a1.get_numberOfFlights() << endl;
  a1.set_fuel(80);
  a1.fly(45, 10);
  cout << "now" << a1.get_name() << "has: " << a1.get_fuel()
       << "and weights: " << a1.get_weight()
       << " it flies: " << a1.get_numberOfFlights() << endl;
  return 0;
}