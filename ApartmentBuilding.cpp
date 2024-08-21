#include "ApartmentBuilding.h"

#include <iostream>

// Default constructor with a capacity of 10
ApartmentBuilding::ApartmentBuilding() {
  capacity = 10;
  units = new Unit[capacity];
  currentUnits = 0;
}

// Constructor with a specified capacity
ApartmentBuilding::ApartmentBuilding(int capacity1)
    : capacity(capacity1), currentUnits(0) {
  units = new Unit[capacity1];
  if (capacity1 < 0) {
    capacity = 10;
    units = new Unit[10];
    currentUnits = 0;
  } else {
    capacity = capacity1;
    units = new Unit[capacity1];
    currentUnits = 0;
  }
}

// Destructor to release allocated memory
ApartmentBuilding::~ApartmentBuilding() { delete[] units; }

// Returns the maximum number of units allowed
int ApartmentBuilding::get_Capacity() const { return capacity; }

// Returns the current number of units in the building
int ApartmentBuilding::get_Current_Number_of_Units() const {
  return currentUnits;
}

// Returns a pointer to the array of units
Unit* ApartmentBuilding::get_Contents() const { return units; }

// Adds a unit if there's space, returns true if successful
bool ApartmentBuilding::add_Unit(const Unit& unit) {
  if (currentUnits < capacity) {
    units[currentUnits++] = unit;
    return true;
  }
  return false;
}
