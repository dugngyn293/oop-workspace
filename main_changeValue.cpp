#include <iostream>

extern void changeValue(double* ptr);



int main() {
    double originalValue = 10.5;
    
    std::cout << "Original value: " << originalValue << std::endl;

    // Call the function with the address of the originalValue
    changeValue(&originalValue);

    std::cout << "Changed value: " << originalValue << std::endl;

    return 0;
}