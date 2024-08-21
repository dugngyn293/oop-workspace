#include <iostream>

#include "ApartmentBuilding.h"
#include "Unit.h"

using namespace std;

int main() {
  // Test ApartmentBuilding class
  ApartmentBuilding building(5);

  // Adding units
  Unit unit1(200000, 2, 80.0);
  Unit unit2(300000, 3, 120.0);

  building.add_Unit(unit1);
  building.add_Unit(unit2);

  cout << "Current number of units: " << building.get_Current_Number_of_Units()
       << endl;

  return 0;
}
