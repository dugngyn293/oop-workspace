#ifndef UNIT_H
#define UNIT_H

#include <iostream>
class Unit {
 private:
  int marketValue;
  int numBedrooms;
  double area;

 public:
  // Default constructor
  Unit();

  // Parameterized constructor
  Unit(int unit_val, int num_beds, double unit_size);

  // Getter methods
  int get_Num_Bedrooms();
  int get_Value();
  double get_Area();
};

#endif  // UNIT_H
