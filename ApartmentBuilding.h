#ifndef APARTMENTBUILDING_H
#define APARTMENTBUILDING_H

#include "Unit.h"  // Assuming you have a Unit class defined elsewhere

class ApartmentBuilding {
 private:
  int capacity;      // Maximum number of units allowed
  int currentUnits;  // Current number of units
  Unit* units;       // Dynamic array to store units

 public:
  // Default constructor (capacity = 10)
  ApartmentBuilding();

  // Constructor with a specified capacity
  ApartmentBuilding(int capacity);

  // Destructor
  ~ApartmentBuilding();

  // Returns the maximum number of units allowed
  int get_Capacity() const;

  // Returns the current number of units in the building
  int get_Current_Number_of_Units() const;

  // Returns a pointer to the array of units
  Unit* get_Contents() const;

  // Adds a unit if there's space, returns true if successful
  bool add_Unit(const Unit& unit);
};

#endif  // APARTMENTBUILDING_H
