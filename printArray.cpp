#include <iostream>

// Function to print the contents of an array
void printArray(double* arr, int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}