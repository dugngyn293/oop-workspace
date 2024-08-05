#include <iostream>

extern double* dynamicArray(int size, double M);

int main() {
    int size = 5;
    double initValue = 3.14;

    // Call the dynamicArray function
    double* myDynamicArray = dynamicArray(size, initValue);

    // Print the dynamic array
    printArray(myDynamicArray, size);

    // Find the maximum value in the dynamic array
    double maxVal = arrayMax(myDynamicArray, size);
    std::cout << "Maximum value: " << maxVal << std::endl;

    // Clean up allocated memory
    delete[] myDynamicArray;

    return 0;
}
