#include <iostream>

#include "Appliance.h"

int main() {
  // Create an Appliance object with a power rating of 10
  Appliance a(10);

  // Turn the appliance on
  a.turnOn();
  std::cout << "Appliance is " << (a.get_isOn() ? "on" : "off") << std::endl;

  // Turn the appliance off
  a.turnOff();
  std::cout << "Appliance is " << (a.get_isOn() ? "on" : "off") << std::endl;

  // Get and display the power rating
  std::cout << "Power rating: " << a.get_powerRating() << std::endl;

  // Display the power consumption
  std::cout << "Power consumption: " << a.getPowerConsumption() << std::endl;

  return 0;
}
