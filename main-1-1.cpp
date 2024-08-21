#include <iostream>

#include "Unit.h"

int main() {
  // Testing default constructor
  Unit unit1;
  std::cout << "Unit 1 - Default Constructor:" << std::endl;
  std::cout << "Number of Bedrooms: " << unit1.get_Num_Bedrooms() << std::endl;
  std::cout << "Market Value: $" << unit1.get_Value() << std::endl;
  std::cout << "Area: " << unit1.get_Area() << " sqm" << std::endl;
  std::cout << std::endl;

  // Testing parameterized constructor
  Unit unit2(150000, 2, 75.5);
  std::cout << "Unit 2 - Parameterized Constructor:" << std::endl;
  std::cout << "Number of Bedrooms: " << unit2.get_Num_Bedrooms() << std::endl;
  std::cout << "Market Value: $" << unit2.get_Value() << std::endl;
  std::cout << "Area: " << unit2.get_Area() << " sqm" << std::endl;
  std::cout << std::endl;

  // Testing parameterized constructor with invalid value
  Unit unit3(-50000, 3, 90.0);
  std::cout << "Unit 3 - Parameterized Constructor with Invalid Value:"
            << std::endl;
  std::cout << "Number of Bedrooms: " << unit3.get_Num_Bedrooms() << std::endl;
  std::cout << "Market Value: $" << unit3.get_Value() << std::endl;
  std::cout << "Area: " << unit3.get_Area() << " sqm" << std::endl;
  std::cout << std::endl;

  return 0;
}
