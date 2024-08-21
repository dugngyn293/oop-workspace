#include "Unit.h"

// Default constructor
Unit::Unit() {
  marketValue = 0;
  numBedrooms = 0;
  area = 0.0;
}

// Parameterized constructor
Unit::Unit(int unit_val, int num_beds, double unit_size) {
  marketValue = (unit_val >= 0) ? unit_val : 0;
  numBedrooms = num_beds;
  area = unit_size;
  if (unit_val < 0) {
    marketValue = 0;
  } else {
    marketValue = unit_val;
  }
  if (num_beds < 0) {
    numBedrooms = 0;

  } else {
    num_beds = numBedrooms;
  }
  if (unit_size < 0) {
    area = 0;
  } else {
    area = unit_size;
  };
}
// Getter method implementations
int Unit::get_Num_Bedrooms() { return numBedrooms; };

int Unit::get_Value() { return marketValue; };

double Unit::get_Area() { return area; };
