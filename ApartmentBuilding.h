#ifndef APARTMENTBUILDING_H
#define APARTMENTBUILDING_H

#include "Unit.h"

class ApartmentBuilding {
 private:
  int max_capacity;       // maximum number of units allowed
  int current_num_units;  // current number of units
  Unit *units;            // dynamic array of units

 public:
  // Default constructor
  ApartmentBuilding();

  // Constructor with capacity parameter
  ApartmentBuilding(int capacity);

  // Destructor
  ~ApartmentBuilding();

  // Getter methods
  int get_Capacity();
  int get_Current_Number_of_Units();
  Unit *get_Contents();

  // Method to add a unit to the building
  bool add_Unit(Unit unit);
};

#endif  // APARTMENTBUILDING_H
