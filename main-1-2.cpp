#include <iostream>

#include "ApartmentBuilding.h"
#include "Unit.h"  // Assuming Unit class is defined with appropriate constructors

int main() {
  // Testing default constructor
  ApartmentBuilding building1;
  std::cout << "Building 1 Capacity: " << building1.get_Capacity() << std::endl;
  std::cout << "Building 1 Current Units: "
            << building1.get_Current_Number_of_Units() << std::endl;

  // Testing parameterized constructor
  ApartmentBuilding building2(5);
  std::cout << "Building 2 Capacity: " << building2.get_Capacity() << std::endl;
  std::cout << "Building 2 Current Units: "
            << building2.get_Current_Number_of_Units() << std::endl;

  // Creating some Unit objects
  Unit unit1, unit2, unit3;

  // Adding units to building2
  if (building2.add_Unit(unit1)) {
    std::cout << "Unit 1 added successfully." << std::endl;
  } else {
    std::cout << "Failed to add Unit 1." << std::endl;
  }

  if (building2.add_Unit(unit2)) {
    std::cout << "Unit 2 added successfully." << std::endl;
  } else {
    std::cout << "Failed to add Unit 2." << std::endl;
  }

  if (building2.add_Unit(unit3)) {
    std::cout << "Unit 3 added successfully." << std::endl;
  } else {
    std::cout << "Failed to add Unit 3." << std::endl;
  }

  std::cout << "Building 2 Current Units after adding: "
            << building2.get_Current_Number_of_Units() << std::endl;

  return 0;
}
