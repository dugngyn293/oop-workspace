#include <iostream>
#include <cmath>

extern int sum_min_max(int integer[], int length);

int main() {
    
  int binary_digits[10] = {1,0,0,0,1,1,0,0,0,1};
  std::cout << sum_min_max(binary_digits,10);
  return 0;

}
