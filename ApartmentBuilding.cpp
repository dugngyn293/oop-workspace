#include "ApartmentBuilding.h"

#include <iostream>

using namespace std;

// Default constructor
ApartmentBuilding::ApartmentBuilding()
    : max_capacity(10), current_num_units(0), units(nullptr) {
  units = new Unit[max_capacity];
};

// Constructor with capacity parameter
ApartmentBuilding::ApartmentBuilding(int capacity)
    : max_capacity(capacity), current_num_units(0), units(nullptr) {
  units = new Unit[max_capacity];
};

// Destructor
ApartmentBuilding::~ApartmentBuilding() { delete[] units; };

// Getter methods
int ApartmentBuilding::get_Capacity() { return max_capacity; };
int ApartmentBuilding::get_Current_Number_of_Units() {
  return current_num_units;
};

Unit* ApartmentBuilding::get_Contents() { return units; };

// Method to add a unit to the building
bool ApartmentBuilding::add_Unit(Unit unit) {
  if (current_num_units < max_capacity) {
    units[current_num_units++] = unit;
    return true;
  } else {
    cout << "Cannot add unit. Apartment building is full." << endl;
    return false;
  }
}
